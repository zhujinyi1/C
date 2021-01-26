/*
祝津一
2004240205
方阵循环
*/
#include<stdio.h>
int main()
{
    int a[6][6],m,c,n,i,j;
    printf("请输入n\n");
    scanf("%d",&n);
    printf("请输入m\n");
    scanf("%d",&m);
    for(i=0;i<n;i++)
    for(j=0;j<n;j++)
    {
        a[i][j]=i*n+j+m+1;
        printf("%2d ",a[i][j]);
        c++;
        if(c%n==0)
        printf("\n");
    }
    return 0;

}