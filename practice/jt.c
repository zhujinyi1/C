/*
鸡兔同笼问题
*/
#include<stdio.h>
int main()
{
    int j,t,m,n,a=0;
    scanf("%d%d",&m,&n);
    for(j=0;j<=m;j++)
        for(t=0;t<=m;t++)
        {
            if((j*2+t*4==n)&&(j+t==m))
                printf("%d %d",j,t),a=1;
        }
    if(a==0)
        j=-1,t=-1,printf("%d %d",j,t);
    return 0;
}