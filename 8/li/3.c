/*
×£½òÒ»
2004240205
½ÇÉ«»¥»»
*/
#include<stdio.h>
void swap1(int x,int y),swap2(int *px,int *py),swap3(int *px,int *py);
int main()
{
    int a=1,b=2;
    int *pa=&a,*pb=&b;
    swap1(a,b);
    printf("a=%d,b=%d\n",a,b);
    a=1,b=2;
    swap2(pa,pb);
    printf("a=%d,b=%d\n",a,b);
    a=1,b=2;
    swap3(pa,pb);
    printf("a=%d,b=%d\n",a,b);
    return 0;
}
void swap1(int x,int y)
{
    int t;
    t=x;
    x=y;
    y=t;
}
void swap2(int *px,int *py)
{
    int t;
    t=*px;
    *px=*py;
    *py=t;
}
void swap3(int *px,int *py)
{
    int *pt;
    pt=px;
    px=py;
    py=pt;
}