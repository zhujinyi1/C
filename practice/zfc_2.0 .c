/*
×£½òÒ»
2004240205
ÐÞ¸Ä×Ö·û´®
*/
#include<stdio.h>
struct students
{
    char name[10];
}s,*p;
void xiugai()
{
    char x[10];
    gets(x);
    p=&s.name;
    strcpy(p,x);
}
int main()
{
    int i;
    fflush(stdin);
    gets(s.name);
    printf("%s",s.name);
    xiugai();
    printf("%s",s.name);
    return 0;
}