/*
祝津一
2004240205
查找并输出位置
*/
#include<stdio.h>
#include<string.h>
int main()
{
    int i;
    char *color[5]={"red","blue","yellow","green","black"};
    /*指针数组初始化*/
    char str[20];
    printf("Input a color:");
    scanf("%s",str);
    for(i=0;i<5;i++)
        if(strcmp(str,color[i])==0)
            break;
    if(i<5)
        printf("position:%d\n",i+1);
    else
    {
        printf("Not Found!");
    }
    return 0;
    
}