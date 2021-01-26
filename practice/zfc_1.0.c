/*
×£½òÒ»
2004240205
ÐÞ¸Ä×Ö·û´®
*/
#include<stdio.h>
struct students
{
    char name[10];
}s,y;
void xiugai()
{
    gets(y.name);
    strcpy(s.name,y.name);
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