/*
祝津一
2004240205
定义一个含有复数的结构类型
*/
#include<stdio.h>
struct fushu
{
    double shibu;
    double xubu;
};
int main()
{
    char x;
    struct fushu a;
    printf("enter 实部和虚部：");
    scanf("%d%d",&a.shibu,&a.xubu);
    printf("复数为：%d%di",a.shibu,a.xubu);
    return 0;
}
