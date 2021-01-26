/*
祝津一
2004240205
计算两个复数积
*/
#include<stdio.h>
struct fs{
    int s,x;
}f1,f2,f3;
int main()
{
    printf("enter f1:");
    scanf("%d%d",&f1.s,&f1.x);
    printf("enter f2:");
    scanf("%d%d",&f2.s,&f2.x);
    f3.s=f1.s*f2.s+f1.x*f2.x;
    f3.x=f1.s*f2.x+f1.x*f2.s;
    printf("%d+%di",f3.s,f3.x);
    return 0;
}