/*
祝津一
2004240205
取地址运算和指针访问变量
*/
#include<stdio.h>
int main()
{
    int a=3,*p;
    p=&a;
    printf("a=%d,*p=%d\n",a,*p);
    *p=10;
    printf("a=%d,*p=%d\n",a,*p);
    printf("enter a:\n");
    scanf("%d",&a);
    printf("a=%d,*p=%d\n",a,*p);
    (*p)++;
    printf("a=%d,*p=%d\n",a,*p);
    return 0;
}