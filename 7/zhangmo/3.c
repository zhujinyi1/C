/*
×£½òÒ»
2004240205
ÅĞ¶ÏÉÏÈı½Ç¾ØÕó
*/
#include<stdio.h>
int main()
{
    int a[6][6],i,m=0,n=0,f=0;
    printf("enter i");
    scanf("%d",&i);
    for(m=0;m<i;m++)
        for(n=0;n<i;n++){
            scanf("%d",&a[m][n]);
            if(m>n&&a[m][n]!=0)  
            f=1;
        }
    if(f!=1)
    printf("YES");
    else
    printf("NO");
    return 0;
}