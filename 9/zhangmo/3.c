/*
祝津一
2004240205
向量加法
*/
#include<stdio.h>
struct xl{
    int s,x;
}x1,x2,x3;
int main()
{
    printf("enter x1(x,y):");
    scanf("%d,%d",&x1.s,&x1.x);
    printf("enter x2(x,y):");
    scanf("%d,%d",&x2.s,&x2.x);
    x3.s=x1.s+x2.s;
    x3.x=x1.x+x2.x;
    printf("(%d,%d)",x3.s,x3.x);
    return 0;
}