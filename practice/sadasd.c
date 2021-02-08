#include<stdio.h>
#include<string.h>
int main()
{
    char a[12]={'\0'};
    printf("%d",strlen(a));
    scanf("%s",&a);
    printf("%s",a);
    printf("%d",strlen(a));
}