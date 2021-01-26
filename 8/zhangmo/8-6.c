/*
×£½òÒ»
2004240205
É¾³ý×Ö·û
*/
#include<stdio.h>
void delchar(char *s,char c);
int main()
{
    char s[80],c;
    printf("enter a string:");
    gets(s);
    printf("enter c");
    scanf("%c",&c);
    delchar(s,c);
    puts(s);
    return 0;
}
void delchar(char *s,char c)
{
    int i,j;
    i=j=0;
    while(s[i]!='\0'){
        if(s[i]!=c)
        {
            s[j]=s[i];
            j++;
        }
        i++;
    }
    s[j]='\0';
}