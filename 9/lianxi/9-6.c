/*
定义一个struct实现学生信息输入和输出
祝津一
2004240205
*/
#include<stdio.h>
struct students{
    char name[10];
    char sex;
    int num;
    double math,english,computer;
    double ave;
}s1;
int main()
{
    printf("enter name:");
    scanf("%s",&s1.name);
    scanf("%c",&s1.sex);
    printf("enter sex:");
    scanf("%c",&s1.sex);
    printf("enter number:");
    scanf("%d",&s1.num);
    printf("enter computer score:");
    scanf("%lf",&s1.computer);
    printf("enter math score:");
    scanf("%lf",&s1.math);
    printf("enter english score:");
    scanf("%lf",&s1.english);
    printf("name\tsex\tnum\tmath\tenglish\tcomputer\n");
    printf("%s\t%c\t%d\t%.2lf\t%.2lf\t%.2lf",s1.name,s1.sex,s1.num,s1.math,s1.english,s1.computer);
    return 0;
}