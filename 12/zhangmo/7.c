/*
祝津一
2004240205
账户余额管理
*/
#include"stdio.h"
#include"stdlib.h"
long size;              /*用于保存sizeof(struct LogData)*/
struct LogData {        /*记录的结构*/
	long logid;         /*记录的ID*/
	char logdate[11];   /*记录发生日期*/        
	char lognote[15];   /*记录事件说明*/
	double charge;      /*发生费用：负表示支处，正表示收入*/
	double balance;     /*余额*/
};
int inputchoice()
{
	int mychoice;
	printf("\n Enter your choice: \n");
	printf("1 -Add a new cash LOG. \n2 -List All Cash LOG. \n");
	printf("3 -Query Last Cash LOG. \n0 -End program. \n");
	scanf("%d",&mychoice);
	return mychoice;
}
long getLogcount (FILE *cfptr)   /*获取文件记录总数*/
{
	long begin,end,logcount;
	fseek(cfptr,0L,SEEK_SET);
	begin=ftell(cfptr);
	fseek(cfptr,size,SEEK_END);
	end=ftell(cfptr);
	logcount=(end-begin) /size-1;
	return logcount;
}
void ListAllLog(FILE *cfptr)     /*列出说有收支流水账*/
{
	struct LogData log;
	fseek(cfptr,0L,SEEK_SET);
	fread(&log,size,1,cfptr);
	printf("logid logdata lognote charge balance\n");
	while(! feof(cfptr)){
	printf("%-6ld%-11s%-15s%10.2lf%10.2lf\n",
		log.logid,log.logdate,log.lognote,log.charge,log.balance);
	fread(&log,size,1,cfptr);
	};
}
void QueryLastLog(FILE *cfptr)    /*查询显示最后一条记录*/
{
	struct LogData log;
	long logcount;
	logcount=getLogcount(cfptr);
	if(logcount>0)
	{                             /*表示有记录存在*/
		fseek(cfptr,size*(logcount-1),SEEK_SET);/*定位最后记录*/
		fread(&log,size,1,cfptr);/*读取最后记录*/
		printf("The last log is: \n");
		printf("logid:%-6ld\nlogdate:%-11s\nlognote:%-15s\n",
			log.logid,log.logdate,log.lognote);
		printf("charge:%-10.2lf\nbalance:%-10.2lf\n",
			log.charge,log.balance);/*显示最后记录内容*/
	}
	else printf("no logs in file!\n");
}
void AddNewLog(FILE *cfptr)
{                                     /*添加新记录*/
	struct LogData log,lastlog;
	long logcount;
	printf("Input logdate(format:2006-01-01):");
	scanf("%s",log.logdate);
	printf("Input lognote:");scanf("%s",log.lognote);
	printf("Input Charge:Income+and expend-:");
	scanf("%lf",&log.charge);
	logcount=getLogcount(cfptr);/*获取记录数*/
	if(logcount>0){
		fseek(cfptr,size*(logcount-1),SEEK_SET);
		fread(&lastlog,size,1,cfptr);/*读入最后记录*/
		log.logid=lastlog.logid+1;  /*记录号按顺序是上次的号+1*/
		log.balance=log.charge+lastlog.balance;
	}
	else{                           /*如果文件是初始状态，记录数为0*/
		log.logid=1;
		  log.balance=log.charge;
	}
	rewind(cfptr);
	printf("logid=%ld\n",log.logid);
	fwrite(&log,sizeof(struct LogData),1,cfptr);/*写入记录*/
}
FILE *openfile(char *openmode)/*打开文件*/
{
	FILE *fp;
	if((fp=fopen("cashbox.dat",openmode))==NULL){
		printf("can not open file cashbox.dat!\n");
		exit(0);
	}
	return (fp);
}
int main()
{
	FILE *fp;int choice;
	size=sizeof(struct LogData);
	while((choice=inputchoice())!=0){
		switch (choice){
		case 1:
			fp=openfile("ab+");
			AddNewLog(fp);
			break;
		case 2:                  /*列出所有的收入支出情况*/
			fp=openfile("rb");
			ListAllLog(fp);
			break;
		case 3:                  /*查询最后记录及余额*/
			fp=openfile("rb");
			QueryLastLog(fp);
			break;
		default:
			printf("Input Error.");break;
		}
	}
	if(fclose(fp)){
		printf("Can not close the file!\n ");
		exit(0);
	}
	return 0;
}