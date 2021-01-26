/*
祝津一
2004240205
由小到大排序（选择排序）
*/
#include<stdio.h>
int main()
{
    int a[10];
    int i,j,n,t,k;
    printf("enter n:\n");
    scanf("%d",&n);
    for(i=0;i<n;i++)
    scanf("%d",&a[i]);
    j=0;
    for(i=0;i<n;i++)
    {
        j=i;
    for(t=i;t<n;t++)
    {
        if(a[j]>a[t])
        j=t; 
    }
        t=a[i];
        a[i]=a[j];
        a[j]=t;
    }
    for(i=0;i<n;i++)
    printf("%d",a[i]);
    return 0;
}