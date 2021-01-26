/*
祝津一
2004240205
由小到大排序(冒泡排序)
*/
#include<stdio.h>
int main()
{
    int a[10];
    int i,j,n,t;
    printf("enter n:\n");
    scanf("%d",&n);
    for(i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
    }
    for(i=0;i<n;i++)
    for(j=0;j<n-1;j++)
    {
        if(a[j]>a[j+1])
        t=a[j],a[j]=a[j+1],a[j+1]=t;
    }
    for(i=0;i<n;i++)
    printf("%d",a[i]);
    return 0;
}