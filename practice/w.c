#include<stdio.h>
int main()
{
    int i=1;
    double m=1.0,pi=0,eps;
    scanf("%le",&eps);
    pi+=m;
    while(m>=eps){
        m=m*i/(i*2+1);
        pi=pi+m;
        i++;
    }
    printf("PI = %.5lf",pi*2);
    return 0;
}