/*
祝津一
2004240205
报数游戏
*/
#include<stdio.h>
int main()
{
    int num[100],i,m,n,no,*p,count;
    printf("enter n:");
    scanf("%d",&n);
    printf("\n");
    for(i=0;i<n;i++)
    {
        num[i]=i+1;           //给n个人编号
    }
    printf("enter m");
    scanf("%d",&m);
    while(m>=n)
    {
        printf("m应该小于n");
    printf("enter m");
    scanf("%d",&m);
    }                          //报错
    p=num;
    count=no=0;
    while(no<n){               
        if(*p!=0)  
            count++;             //循环到已经报数的人不计数
        if(count==m){
            no++;
            printf("NO.%d:%d\n",no,*p);
            *p=0;                //将报数的人数字归零
            count=0;             //重新计数
        }
        p++;
        if(p==num+n)
        {
            p=num;               //如果报数到末尾，重新开始
        }
    }
    return 0;                    
}