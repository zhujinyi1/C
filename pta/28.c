//简单计算器
#include<stdio.h>
int main()
{
    int a,b;
    char d;
    scanf("%d",&a);
    while((d=getchar())!='=')
    {
    scanf("%d",&b);
    if(d=='+')
        a=a+b;
    else if(d=='-')
        a=a-b;
    else if(d=='*')
        a=a*b;
    else if(d=='/')
        if(b==0)
        {
            printf("ERROR");
            return 0;
        }
        else
        {
            a=a/b;
        }
    else
    {
        printf("ERROR");
        return 0;
    }
    }
    printf("%d",a);    
    return 0;
}