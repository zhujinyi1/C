/*
祝津一
200424205
输入年份和天数，输出年月日
*/
#include<stdio.h>
void m(int year,int yearday,int *pmonth,int *pday);
int main()
{
    int day,month,year,yearday;
    printf("input year and yearday:\n");
    scanf("%d%d",&year,&yearday);
    m(year,yearday,&month,&day);
    printf("%d-%d-%d\n",year,month,day);
    return 0;
}
void m(int year,int yearday,int *pmonth,int *pday)
{
    int k,l;
    int t[2][13]={{0,31,28,31,30,31,30,31,31,30,31,30,31},{0,31,29,31,30,31,30,31,31,30,31,30,31}};
    l=(year%4==0&&year%100!=0)||year%400!=0;
    for(k=1;yearday>t[l][k];k++)
    yearday-=t[l][k];
    *pmonth=k;
    *pday=yearday;
}