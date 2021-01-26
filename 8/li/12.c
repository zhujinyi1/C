/*
祝津一
2004240205
求任意个整数的和
*/
#include<stdio.h>
#include<stdlib.h>
int main()
{
    int n,sum,i,*p;
    printf("Enter n:\n");
    scanf("%d",&n);
    if((p=(int *) calloc(n,sizeof(int)))==NULL)      /*为数组p分配n个整形空间*/
    {
        printf("Not able to allocate memory.\n");
        exit(1);
    }
    printf("Enter %d integers:",n);                    /*输入n个整数*/
    for(i=0;i<n;i++)
    scanf("%d",p+i);
    sum=0;    
    for(i=0;i<n;i++)                                 /*计算n个整数和*/
    sum=sum+*(p+i);
    printf("The sum is %d\n",sum);
    free(p);                                          /*释放动态分配空间*/
    return 0;
}