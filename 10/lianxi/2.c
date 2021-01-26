/*
祝津一
2004240205
完成宏定义
*/
#include<stdio.h>
#define MIN(a,b) (a<b?a:b)
#define LSOLOWER(c) (((c)>='a')&&((c)<='z'))
#define ISLEAP(y) ((y%4==0&&y%100!=0)||(y%400==0))
#define PI 3.14159
#define CIRFER(r) 2*PI*(r)
int main()
{
    char c;
    double r;
    int a,b,y;
    printf("输入a,b,r,y");
    scanf("%d%d%lf%d",&a,&b,&r,&y);
    printf("c\n");
    fflush(stdin);
    c=getchar();
    printf("最小值为%d\n",MIN(a,b));
    if(LSOLOWER(c))
    {
        printf("是小写字母\n");
    }
    else
    {
        printf("不是小写字母");
    }
    
    if(ISLEAP(y))
    {
        printf("是闰年\n");
    }
    else
    {
        printf("不是闰年");
    }
    
    printf("%lf",CIRFER(r));
    return 0;
}