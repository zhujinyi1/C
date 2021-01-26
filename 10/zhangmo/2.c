/*
求阶乘的和
2004240205
祝津一
*/
#include<stdio.h>
double fact(int n)
{
    if(n==1||n==0)
        return 1;
    else 
        return n*fact(n-1);
}
int main()
{
    int n,i,sum=0;
    printf("enter n:");
    scanf("%d",&n);
    for(i=1;i<=n;i++)
    {
        sum=sum+fact(i);
    }
    printf("%d",sum);
    return 0;
}