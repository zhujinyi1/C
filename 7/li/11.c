/*
×£½òÒ»
2004240205
ÅĞ¶Ï»ØÎÄ
*/
#include<stdio.h>
#include<string.h>
int main()
{
    char str[80];
    int i,f=0;
    gets(str);
    for(i=0;i<strlen(str);i++)
    {
        if(str[i]!=str[strlen(str)-i-1])
        f=1;
    }
    if(f==0)
    printf("YES");
    else
    {
        printf("NO");
    }
    return 0;
}