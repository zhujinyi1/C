 /*
祝津一
2004240205
利用指针模拟密码开锁
*/
#define NULL 0
#include<stdio.h>
int main()
{
    int x=54321;
    int *p=NULL;
    p=&x;
    printf("%d\n",x);
    printf("%d,%d\n",p,*p);
    return 0;
}