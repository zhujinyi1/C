/*
祝津一
2004240205
统计字母数
*/
#include<stdio.h>
#include<string.h>
#include<stdlib.h>
int main()
{

    int n,i,j,max_1=0,count[26]={0};
    char str[80];
    printf("请输入单词数量n");
    scanf("%d",&n);
    for(i=0;i<n;i++){
        scanf("%s",&str);
        //strlen()求字符串长度
        for(j=0;j<strlen(str);j++){
            count[str[j]-'a']++;
        }
    }
    for(i=0;i<26;i++)
    printf("count[%c]=%d\n",'a'+i,count[i]);
    return 0;

}

