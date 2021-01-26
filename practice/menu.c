#include<stdio.h>
int main()
{
	int x,y,z;
	int t,sum=0;
	double  a;
	float  b;
	char c;//char型变量的值就是ASCII码值0~127，特殊的整型数
	for(;;)
    {
		printf("\n---------------菜单---------\n");
		printf("\n--A、输入三个学生成绩-------\n");
		printf("\n--B、求和三个学生成绩---\n");
		printf("\n--C、输出三个学生成绩-\n");
		printf("\n--0、退出---------\n");
		printf("\n--请输入你的选择：（A、B、C）");
		scanf("%c",&c);
		
		switch(c)
		{
		case 'A':printf("\n输入三个学生成绩\n");
			 scanf("%d%d%d",&x,&y,&z);//x,y,z为三个学生成绩
			 break;
		case 'B': printf("\n三个学生成绩求和\n");
		     sum=0;
		     sum=x+y+z;
			 printf("\n三个学生成绩总和=%d\n",sum);
		     break;
		case 'C': printf("\n输出三个学生成绩\n");
		   printf("%d   %d     %d",x,y,z);//x,y,z为三个学生成绩
		      break;
		default: printf("\n退出\n");break;
		}
		scanf("%c",&c);//吸收脏数据—回车
	}

/*

	printf("请依次输入三个学生成绩：");
	scanf("%d%d%d",&x,&y,&z);//x,y,z为三个员工的工资
	*/
	return 0;
}