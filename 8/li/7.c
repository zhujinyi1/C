/*
祝津一
2004240205
计算数组和(分别用数组和指针)
*/
#include<stdio.h>
int main()
{
    int i,a[10],*p;
    long sum=0;
    printf("enter 10 integers:");
    for(i=0;i<10;i++)
    scanf("%d",&a[i]);
    for(i=0;i<10;i++)
    sum=sum+a[i];
    printf("sum=%ld\n",sum);
    sum=0;
    for(p=a;p<a+9;p++)
    sum=sum+*p;
    printf("sum=%ld",sum);
    return 0;
}