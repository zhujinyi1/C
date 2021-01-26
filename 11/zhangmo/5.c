/*
祝津一
2004240205
从指定位置输出字符串
*/
#include<stdio.h>
#include<string.h>
char *match(char *s,char ch1,char ch2)
{
    while(1)
    {
    if(*s==ch1)
    {
        while(*s!=ch2)
        {            
        printf("%c",*s);
            s++;
        }
        printf("%c",*s);
        break;
    }
    ++s;
    }
}
int main()
{
    char s[80],ch1,ch2;
    printf("enter a string:");
    gets(s);
    printf("enter ch1,ch2:");
    scanf("%c",&ch1);
    scanf("%c",&ch2);
    match(s,ch1,ch2);
    return 0;
}