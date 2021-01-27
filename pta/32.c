//求给定的矩阵元素之和
#include<stdio.h>
int main()
{
    int m,n,a[1000][6],i,j,b[1000]={0};
    scanf("%d%d",&m,&n);
    for(i=0;i<m;i++){
        for(j=0;j<n;j++){
            scanf("%d",&a[i][j]);
            b[i]+=a[i][j];
        }
    }
    for(i=0;i<m;i++)
        printf("%d\n",b[i]);
    return 0;
}