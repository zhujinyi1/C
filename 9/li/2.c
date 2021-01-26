/*
学生成绩排序
2004240205
祝津一
*/
#include<stdio.h>
struct student{
    int num;
    char name[10];
    int computer,english,math;
    double average;
};
int main()
{
    int i,index,j,n;
    struct student students[50],temp;
    /*输入*/
    printf("Input n:");
    scanf("%d",&n);
    for(i=0;i<n;i++)
    {
        printf("Input the info of NO.%d:\n",i+1);
        printf("number:");
        scanf("%d",&students[i].num);
        printf("name:");
        scanf("%s",&students[i].name);
        printf("math score:");
        scanf("%d",&students[i].math);
        printf("english score:");
        scanf("%d:",&students[i].english);
        printf("computer score:");
        scanf("%d",&students[i].computer);
        students[i].average=(students[i].math+students[i].english+students[i].computer)/3.0;
    }
    /*结构数组排序，选择排序*/
    for(i=0;i<n-1;i++)
    {
        index=1;
        for(j=i+1;j<n;j++)
        if(students[j].average>students[index].average)
        index=j;
        temp=students[index];
        students[index]=students[i];
        students[i]=temp;
    }
    printf("num\t name\t average\n");
    for(i=0;i<n;i++)
    printf("%d\t%s\t%.2lf\n",students[i].num,students[i].name,students[i].average);
    return 0;
}