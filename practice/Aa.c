#include <stdio.h>
int main()
{
    char a,b;
    printf("输入一个小写字母:\n");
    a=getchar();
    b=a-32;
    printf("转换后的字母为：%c，%d\n",b,b);
    return 0;
}