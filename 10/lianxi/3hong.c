/*
祝津一
2004240205
三个数找最大数(宏定义版)
*/
#include<stdio.h>
#define M(a,b) (a>b?a:b)
#define MAX(a,b,c)   (M(a,b)>c?M(a,b):c)
int main()
{
    int a,b,c;
    scanf("%d%d%d",&a,&b,&c);
    printf("%d",MAX(a,b,c));
    return 0;
}