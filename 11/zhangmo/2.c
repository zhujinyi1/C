/*
×£½òÒ»
2004240205
²éÕÒĞÇÆÚ
*/
#include<stdio.h>
#include<string.h>

int main()
{
    char a[12];
    char b[7][12]={"Sunday","Monday","Tuesday","Wendesday","Thursday","Friday","Saturday"};
    int i,t=0;
    scanf("%s",&a);
    for(i=0;i<7;i++)
    {
        if(strcmp(a,b[i])==0)
        {
            t=1;
            printf("%d",i);
            break;
        }
        
    }
    if(t==0)
    printf("-1");
    return 0;
}