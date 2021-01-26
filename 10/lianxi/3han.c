/*
祝津一
2004240205
三个数最大值(函数版)
*/
#include<stdio.h>
int max(int a,int b,int c)
{
    if(a>b)
        return (a>c?a:c);
    else
    {
        return (b>c?b:c);
    }
    
}
int main()
{
    int a,b,c;
    scanf("%d%d%d",&a,&b,&c);
    printf("%d",max(a,b,c));
    return 0;
}