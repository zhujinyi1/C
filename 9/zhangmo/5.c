/*
祝津一
2004240205
通讯录排序
*/
#include<stdio.h>
struct birthday 
    {
        int y,m,d,x;
    };
struct p
{
    char name[10];
    struct birthday b;
    char num[80];
}p[10],temp;

int main()
{
    int i,f=0,t,n;
    printf("enter n:");
    scanf("%d",&n);
    for(i=0;i<n;i++)
    {
    printf("请输入第%d个人的姓名:",i+1);
    scanf("%s",&p[i].name);
    printf("               生日:");
    scanf("%d%d%d",&p[i].b.y,&p[i].b.m,&p[i].b.d);
    p[i].b.x=(p[i].b.y*12+p[i].b.m)*31+p[i].b.d;
    printf("               电话:");
    scanf("%s",&p[i].num);
    }
    printf("姓名\t 生日\t\t电话号\n");
    for(i=0;i<n-1;i++)
    {
        f=i;
        for(t=i+1;t<n;t++){
            
        if(p[f].b.x>=p[t].b.x)
        {
            temp=p[f];
            p[f]=p[t];
            p[t]=temp;
        }
        }
    }
    for(i=0;i<n;i++)
    {
        printf("%s\t %d-%d-%d\t%s\n",p[i].name,p[i].b.y,p[i].b.m,p[i].b.d,p[i].num);
    }
    return 0;
}