/*
×£½òÒ»
2004240205
²éÕÒ×Ó´®
*/
#include<stdio.h>
#include<string.h>
#include<stdlib.h>
char *search(char *s,char *t)
{
    int  m,i,j;
    char *p=NULL;
    for(i=0;i<=strlen(s)-strlen(t);i++)
    {
        if(*(s+i)==*t)
            break;
    }
    p=s+i;
    for(j=0;j<strlen(t);j++,p++)
        if(*p==*(t+j)) 
            m=0;
        else
        {
            m=1;
            break;
        }
    if(m==1)
    {
        return NULL;
    }    
    else
    {
        return s+i;
    }
}
int main()
{
    int c,i;
    char s[80],t[80],*p,str[80],ch;
    p=&str;
    printf("Input the string:");
    gets(s);
    printf("enter a string:");
    gets(t);
    if((p=search(s,t))!=NULL)
        printf("%d\n",p-s+1);
    else
        printf("-1\n");
    return 0;
    
}