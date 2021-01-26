#include<stdio.h>
#include<string.h>
struct stu
{
    char a[10];
}s;
void x()
{
    memset(s.a,'\0',1);
}
int main()
{
    memset(s.a,'a',5);
    printf("%d\n",strlen(s.a));
    puts(s.a);
    printf("\n");
    x();
    puts(s.a);
    printf("\n%d",strlen(s.a));
    return 0;
}