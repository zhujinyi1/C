/*
求满足条件的三位数
祝津一
2004240205
*/
#include<stdio.h>
#include<math.h>
int pf(int i)
{

    if((double)sqrt(i)==(int)sqrt(i))
        return 1;
    else
    {
        return 0;
    }
    
}
int sz(i)
{
    int a,b,c;
    a=i%10;
    b=i/10%10;
    c=i/100;
    if(a==b||b==c||c==a)
        return 1;
    else 
        return 0;
}
void h1(int i)
{
    if(pf(i)==1&&sz(i)==1)
        printf("%d\n",i);
}

int main()
{
    int n,i;
    printf("enter n(999>=n>=100):");
    scanf("%d",&n);
    for(i=100;i<=n;i++)
        h1(i);
    return 0;
}