/*
×£½òÒ»
2004240205
¸´ÖÆ×Ö·û´®
*/
#include<stdio.h>
#include<string.h>
#include<stdlib.h>
void strmcpy(char *s,char *t,int m);
int main()
{
    int m;
    char t[80],s[80];
    printf("enter a string");
    gets(t);
    printf("enter m");
    scanf("%d",&m);
    if(strlen(t)<m)
    {
        printf("ERROR");
        exit(1);
    }
    strmcpy(s,t,m);
    puts(s);
    return 0;
}
void strmcpy(char *s,char *t,int m)
{
    t=t+m-1;
    while(*t!='\0')
    {
        *s=*t;
        t++;
        s++;
    }
}