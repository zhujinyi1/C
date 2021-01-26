/*
祝津一
2004240205
计算圆形体体积
*/
#include<stdio.h>
#include<math.h>
#define pi 3.141592654
void cal(int sel);
double vol_ball(void);
double vol_cylind(void);
double vol_cone(void);
int main()
{
    int sel;
    /*循环选择计算圆形体体积*/
    while(1)
    {
        printf("1-计算球体体积\n");
        printf("2-计算圆柱体体积\n");
        printf("1-计算圆锥体体积\n");
        printf("其他-退出程序运行命令\n");
        printf("请输入命令\n");
        scanf("%d",&sel);
        if(sel<1||sel>3)
        {
            printf("退出");
            break;
        }
        else
            cal(sel);
    }
    return 0;
}
void cal(int sel)
{
    switch(sel)
    {
        case 1:
            printf("球体体积为：%.2lf\n",vol_ball());
            break;
        case 2:
            printf("圆柱体体积为：%.2lf\n",vol_cylind());
            break;
        case 3:
            printf("圆锥体体积为：%.2lf\n",vol_cone());
            break;
    }
}
/*计算球体体积*/
double vol_ball()
{
    double r;
    printf("请输入球体半径");
    scanf("%lf",&r);
    return (4.0/3.0*pi*r*r*r);
}
/*计算圆柱体体积*/
double vol_cylind()
{
    double r,h;
    printf("请输入底面半径和高");
    scanf("%lf%lf",&r,&h);
    return (pi*r*r*h);
}
/*计算圆锥体体积*/
double vol_cone()
{
    double h,r;
    printf("请输入圆锥体底面半径和高");
    scanf("%lf%lf",&r,&h);
    return (pi*r*r*h/3.0);
}