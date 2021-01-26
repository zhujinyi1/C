/*
×£½òÒ»
2004240205
µ¹ĞòÊä³ö
*/
#include<stdio.h>
int main()
{
    int a[10],n,i,t,f;
    printf("enter n:");
    scanf("%d",&n);
    for(i=0;i<n;i++){
        scanf("%d",&a[i]);
    }
    t=f=0;
    for(i=0;i<n/2;i++){
        t=a[i];
        a[i]=a[n-i-1];
        a[n-1-i]=t;
    }
    for(i=0;i<n;i++)
    printf("%d",a[i]);
    return 0;
}