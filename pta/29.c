//统计单词数量
#include<stdio.h>
int main()
{
    char a;
    int c=0,t=1;
    while((a=getchar())!='\n')
    {
        if(a!=' '&&t!=0){
            t=0;
            c++;
        }
        if(a==' '){
            while((a=getchar())==' ');
            t=1;
        }
    }
    printf("%d",c);
    return 0;
}
