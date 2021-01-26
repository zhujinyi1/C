/*
×£½òÒ»
2004240205
²éÕÒ
*/
#include<stdio.h>
int search(int list[],int n,int x);
int main()
{
    int a[10],n,i,x,m;
    printf("enter n:\n");
    scanf("%d",&n);
    printf("enter x:\n");
    scanf("%d",&x);
    for(i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
    }
    m=search(a,n,x);
    if(m==-1)
   
    printf("NOT FOUND");
    else
    printf("%d",m);
    return 0;
}
int search(int list[],int n,int x)
{
    int t,b,c=0;
    for(t=0;t<n;t++)
    {
        if(x==list[t])
        {
        b=t;
        c=1;
        }

    }
    if(c==0)
    {
        b=-1;
    }
    return b;
}