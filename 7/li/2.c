/*
祝津一
2004240205
输出斐波那契数列前十个数*/
#include<stdio.h>
int main()
{
    int a[10]={1,1},i;
    printf("%3d\n%3d\n",a[0],a[1]);
    for(i=2;i<10;i++)
    {
        a[i]=a[i-1]+a[i-2];
        printf("%3d\n",a[i]);
    }
    return 0;
}