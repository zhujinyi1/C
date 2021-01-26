/*
×£½òÒ»
2004240205
×ÖÄ¸Ìæ»»
*/
#include<stdio.h>
int main()
{
    char str[80];
    int i,j;
    printf("enter a string :\n");
    i=0;
    while((str[i]=getchar())!='\n')
    i++;
    str[i]='\0';
    for(i=0;str[i]!='\0';i++){
        if(str[i]>='A'&&str[i]<='Z'){
            str[i]='A'+'Z'-str[i];
        }
    }
    printf("%s",str);
    return 0;
}
