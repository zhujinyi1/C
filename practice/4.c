#include<stdio.h>
#include<math.h>
int fun1 (int n);
int fun2 (int n);
int main ()
{
    double eps,item,PI=0,i=1;
    scanf("%le",&eps);
    while (item<eps){
        item=fun1 (i)/fun2 (i);
        PI=PI+item;
        i++;
    }
    printf("PI = %.5lf",(PI+1)*2);
    return 0;
}
int fun1 (int n)
{
    int j,result1=1;
    for (j=1;j<=n;j++)
        result1=result1*j;
    return result1;
}
int fun2 (int n)
{
    int j,result2=1;
    for (j=1;j<=n;j++)
    result2=result2*(2*j+1);
    return result2;
}