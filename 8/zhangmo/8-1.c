/*
祝津一
2004240205
拆分实数
*/
#include<stdio.h>
void s(float a,float *m,float *n);
int main()
{
    float a,b,c;
    printf("enter a:\n");
    scanf("%f",&a);
    s(a,&b,&c);
    printf("%f\n%f\n",b,c);
    return 0;
}
void s(float a,float *m,float *n)
{
    *m=(int)a;
    *n=a-*m;
}