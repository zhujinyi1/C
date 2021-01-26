/*
祝津一
2004240205
查找数据
*/
#include<stdio.h>
int main()
{
    int a[5],i,x,m=0;
    for(i=0;i<5;i++)
    {
    printf("请输入第%d个数",i+1);
    scanf("%d",&a[i]);
    }
    printf("请输入要查找的数x");
    scanf("%d",&x);
    for(i=0;i<5;i++)
    {
        if(x==a[i]){
            printf("该数的下标为 %d\n",i);
            m=1;
        }
    }
    if(m==0)
    printf("NOT FOUND!!!");
    return 0;
}