/*
祝津一
2004240205
输出月份
*/
#include<stdio.h>
int main()
{
    int n;
    char a[12][10]={"January","Feburary","March","April","May","June","July","Auguset","September","November","December"};
    printf("enter n:");
    scanf("%d",&n);
    printf("%s",a[n-1]);
    return 0;
}