/*
2004240205
×£½òÒ»
×ªÖÃ»»ĞĞ¾ØÕó
*/
#include<stdio.h>
int main()
{
    int a[10][10],n,i,j;
    printf("enter n:");
    scanf("%d",&n);
    for(i=0;i<n;i++){
    for(j=0;j<n;j++){
        a[i][j]=n*n-(n*i+j);
        printf("%2d ",a[i][j]);
    }
    printf("\n");
    }
    return 0;
}