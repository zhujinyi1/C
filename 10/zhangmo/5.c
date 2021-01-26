/*
×£½òÒ»
2004240205
¼ÆËãº¯Êı
*/
#include<stdio.h>
int ack(int m,int n)
{
    if(m=0)
        return n+1;
    if(n=0&&m>0)
        return ack(m-1,1);
    if(m>0&&n>0)
        ack(m-1,ack(m,n-1));
}
int main()
{
    int m,n;
    printf("enter m,n:");
    scanf("%d%d",&m,&n);
    printf("%d",ack(m,n));
    return 0;
}