#include<stdio.h>
int main()
{
    char a;
    while((a=getchar())!='\n'){
        if(a>='a'&&a<='z'){
            a-=32;
            if(a=='Z'){
                a='A';
            }
            else 
                a++;
        }
        else if(a>='A'&&a<='Z'){
            a+=32;
            if(a=='z'){
                a='a';
            }
            else
                a++;
        }
        printf("%c",a);
    }
    return 0;
}  