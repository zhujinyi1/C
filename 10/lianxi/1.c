/*
µİ¹éÇóºÍ
2004240205
×£½òÒ»
*/
#include<stdio.h>
int sum(int n)
{
    if(n==1)
        return 1;
    else
    {
        return n+sum(n-1);
    }
}
int main()
{
    int n;
    printf("enter n:");
    scanf("%d",&n);
    printf("%d",sum(n));
    return 0;
}