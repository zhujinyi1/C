/*
祝津一
2004240205
找出矩阵最大值以及角标
*/
#include<stdio.h>
int main()
{
    int a[3][2],i,j,m,n;
    for(i=0;i<3;i++)
    {
        for(j=0;j<2;j++)
        {
            printf("enter :");
            scanf("%d",&a[i][j]);
        }
    }
    for(i=0;i<3;i++)
    {
        for(j=0;j<2;j++)
        {
            printf("%2d ",a[i][j]);
        }
        printf("\n");
    }
    m=n=0;
    for(i=0;i<3;i++)
    {
        for(j=0;j<2;j++)
        {        
            if(a[i][j]>a[m][n])
            {
                m=i;
                n=j;
            }
        }
    }
    printf("最大的数字为%d\n",a[m][n]);
    printf("其下标为[%d][%d]\n",m,n);
    return 0;
}