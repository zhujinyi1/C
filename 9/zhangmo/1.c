/*
祝津一
2004240205
时间换算
*/
#include<stdio.h>
struct time
{
    int h,m,s; 
}t;
int main()
{
    int n,i;
    printf("enter time(h.m.s):");
    scanf("%d%d%d",&t.h,&t.m,&t.s);
    printf("enter n:");
    scanf("%d",&n);
    for(i=1;i<=n;i++)
    {
        t.s++;
        if(t.s==60)
        {
            t.s=0;
            t.m++;
        }
        if(t.m==60)
        {
            t.m=0;
            t.h++;
        }
        if(t.h==24)
            t.h=0;
    }
    printf("%dh %dm %ds",t.h,t.m,t.s);
    return 0;
    
}

    int i;
