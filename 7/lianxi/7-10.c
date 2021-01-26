/*
祝津一
2004240205
查找字符
*/
#include<stdio.h>
int main()
{
    int i,j,t=0,f;
    char str[80],x,a;
    printf("enter x:");
    scanf("%c",&x);
    scanf("%c",&a);
    printf("enter a string:\n");
    i=0;
    while((str[i]=getchar())!='\n'){
        i++;
    }
    str[i]='\0';
    for(i=0;str[i]!='\0';i++)
    {
        if(x==str[i]){
            f=i;
            t=1;
        }
    }
    if(t)
    printf("最大下标为%d",f);
    else
    {
        printf("NOT FOUND");
    }
    return 0;
    
}