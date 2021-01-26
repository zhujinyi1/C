/*
祝津一
2004240205
定义一个含有五个学生的结构数组
*/
#include<stdio.h>
struct students
{
    char name[10];
    char sex;
    char number;
    double math,english,computer;
    double ave;
};
int main()
{
    int i;
    struct students s[5]={0};
    printf("name\tsex\t number\tmath\tenglish\tcomputer\t\n");
    for(i=0;i<5;i++)
    {
    
    printf("%s\t%s\t%c\t%lf\t%lf\t%lf\t%lf\n",s[i].name,s[i].sex,s[i].number,s[i].math,s[i].english,s[i].computer);
    }
    return 0;
}