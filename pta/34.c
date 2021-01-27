//×ÖÄ¸Ìæ»»
#include<stdio.h>
int main()
{
    char a[80];
    int i;
    gets(a);
    while(a[i]!='\0'){
        if(a[i]>='A'&&a[i]<='Z'){
            a[i]='A'+'Z'-a[i];
        }
        i++;
    }
    puts(a);
    return 0;
}