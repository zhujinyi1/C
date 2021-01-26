
#include<stdio.h>
//指针
void fun(int *a,int *b)
{
    int t;
    t=*a;
    *a=*b;
    *b=t;

}
//数组
void f(int a[])
{
    int t;
    t=a[0];
    a[0]=a[1];
    a[1]=t;
}

void fun2(int a[],int b[])
{
    int t;
    t=a[0];
    a[0]=b[0];
    b[0]=t;
}
int main()
{
    /*
    int a=1,b=2;
    printf("\n%d,%d",a,b);
    fun(&a,&b);
    printf("\n%d,%d",a,b);
    return 0;
    */
    /*int a[2];
    a[0]=1;
    a[1]=2;
    printf("%d,%d\n",a[0],a[1]);    
    f(a);
    printf("%d,%d\n",a[0],a[1]);
    return 0;
    */
   int a=1,b=2;
   printf("%d %d\n",a,b);
   fun2(&a,&b);
   printf("%d,%d",a,b);
   return 0;
}
