#include<stdio.h>
#include<stdlib.h>
struct birthday
{
	int year;
	int month;
	int day;
};
struct contact
{
	char name[10];
	char pnum[11];
	struct birthday birth;
};
struct contact c[10];
int n=0;
void shuru()
{
	int i;
	printf("Input n:");
	scanf("%d",&n);
	printf("输入%d个联系人的信息:\n",n);
	printf("姓名 生日(xxxx.xx.xx) 电话号码\n");
	for(i=0;i<n;i++)
		scanf("%s %d.%d.%d %s",c[i].name,&c[i].birth.year,&c[i].birth.month,&c[i].birth.day,c[i].pnum);
}
void paixu()
{
	int i,j;
	struct contact temp;
	for(i=0;i<n-1;i++)
	{
		for(j=n-1;j>0;j--)
			if(c[j].birth.year>c[j+1].birth.year)
			{
				temp=c[j];
				c[j]=c[j+1];
				c[j+1]=temp;
			}
			else if(c[j].birth.year=c[j+1].birth.year)
				if(c[j].birth.month>c[j+1].birth.month)
				{
					temp=c[j];
					c[j]=c[j+1];
					c[j+1]=temp;
				}
				else if(c[j].birth.month=c[j+1].birth.month)
					if(c[j].birth.day>c[j+1].birth.day)
					{
						temp=c[j];
						c[j]=c[j+1];
						c[j+1]=temp;
					}
	}
}
void shuchu()
{
	int i;
	printf("姓名 生日(xxxx.xx.xx) 电话号码\n");
	for(i=0;i<n;i++)
		printf("%s %d.%d.%d %s\n",c[i].name,c[i].birth.year,c[i].birth.month,c[i].birth.day,c[i].pnum);
}
void menu()
{
	printf("-----------------MENU-----------------\n");
	printf("\t 1.输入联系人的信息\n");
	printf("\t 2.将联系人按年龄排序\n");
	printf("\t 3.输出联系人的信息\n");
	printf("\t 0.退出系统\n");
	printf("-----------------MENU-----------------\n");
}
int main(void)
{
	int choice;
	while(1)
	{
		menu();
		printf("请选择：");
		scanf("%d",&choice);
		switch(choice)
		{
		case 1:shuru();break;
		case 2:paixu();break;
		case 3:shuchu();break;
		case 0:exit(0);
		default:printf("输入错误，请重新输入!\n");
		}
	}
	return 0;
}