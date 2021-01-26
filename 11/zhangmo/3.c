/*
祝津一
2004240205
计算最长字符串长度
*/
#include<stdio.h>
#include<string.h>
int main()
{
    int n,i=0,j=0;
    char a[10][80];
    printf("enter n:");
    scanf("%d",&n);
    for(i=0;i<n;i++)
    {
        fflush(stdin);
        gets(a[i]);
        fflush(stdin);
    }
    j=strlen(a[0]);
    if(n==0){
        printf("%d",strlen(a[0]));
    }
    for(i=0;i<n;i++)
    {
        if(strlen(a[i])>=j)
        {
            j=strlen(a[i]);
        }
    }
    printf("%d",j);
    return 0;
}