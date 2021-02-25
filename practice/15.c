#include<stdio.h>
int main()
{
    char a;
    int c = 0;
    while((a = getchar())!='\n')
    {
        if(a>='a'&&a<='z'||a>='A'&&a<='Z')
        {
            while(1)
            {
                a = getchar();
                if(!(a>='a'&&a<='z'||a>='A'&&a<='Z')||a=='\n'){
                    break;
                }
            }
            c++;
            if(a=='\n')
                break;
            
        }
    }
    printf("%d",c);
    return 0;
}