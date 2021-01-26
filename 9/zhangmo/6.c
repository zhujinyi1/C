/*
祝津一
2004240205
按等级统计
*/
#include<stdio.h>
struct student
{
    char name[10];
    char num[80];
    float score;
    char rank;
}stu[10];
int set_grade(struct student *p,float s,int i)
{
    int j;
    p=&stu[i];
    if(s<60)
    {
    p->rank='D';
    return 1;
    }
    if(s>=60&&s<70)
    p->rank='C';
    if(s>=70&&s<85)
    p->rank='B';
    if(s>=85&&s<100)
    p->rank='A';
    return 0;
}
int main()
{
    int i,n,k=0,x=0;
    for(i=0;i<10;i++)
    {
        k=0;
        printf("请输入第%d个学生的姓名:",i+1);
        scanf("%s",&stu[i].name);
        printf("                 学号:");
        scanf("%s",&stu[i].num);
        printf("                 成绩:");
        scanf("%f",&stu[i].score);      
        k=set_grade(stu,stu[i].score,i);
        if(k==1)
        x++;
    }
    printf("姓名\t学号\t成绩\t等级\n");
    for(i=0;i<10;i++)
    {
        printf("%s\t%s\t%.2f\t%c\n",stu[i].name,stu[i].num,stu[i].score,stu[i].rank);
    }
    printf("不及格%d人",x);
    return 0;
}