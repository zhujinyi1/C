#include<stdio.h>
int main(){
    double a,c,d;
    int b;
    scanf("%lf %d %lf",&a,&b,&c);
    if(b)
        d = a*1.26;
    else
        d = a*2.455;
    printf("%.2lf ",d);
    if(d>=c)
        printf("T_T");
    else
        printf("^_^");
    return 0;
}