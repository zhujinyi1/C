/*
祝津一
2004240205
求最大值对应的最小下标
*/
#include<stdio.h>
int main()
{
    int a[10],n,i,t,f;
    printf("enter n:");
    scanf("%d",&n);
    for(i=0;i<n;i++)
    scanf("%d",&a[i]);
    t=0;
    for(i=0;i<n;i++){
        if(a[t]<a[i]){
            t=i;
        }
    }
    printf("最大值为%d\n",a[t]);
    printf("最小下标为%d",t);
    return 0;
}