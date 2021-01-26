/*
祝津一
2004240205
统计投票
*/
#include<stdio.h>
int main()
{
    int a[9]={0},i,t,j;
    for(i=1;i<=1000;i++)
    {
        printf("请输入第%d个数：\n",i);
        scanf("%d",&t);
        if(t>=1&&t<=1000){
            a[t]++;
        }
        else
        {
            printf("error\n");
            i--;
        }
    }
    for(j=1;j<9;j++){
        printf("第%d号栏目票数为%d\n",j,a[j]);
    }
    return 0;
}