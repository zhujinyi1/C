/*
祝津一
2004240205
找鞍点
*/
#include<stdio.h>
int main()
{
    int a[6][6],k=0,i=0,t=0,f=0,m,n,p=0;
    printf("enter k:\n");
    scanf("%d",&k);
    if(k==1)
    {
        printf("YES\n");
        printf("鞍点为%d %d\n",t,f);
    }
    for(m=0;m<k;m++)
    for(n=0;n<k;n++){
        scanf("%d",&a[m][n]);
    }
    for(m=0;m<k;m++)
    {
        t=0;
        for(n=0;n<k;n++)
        {
            if(a[m][n]>a[m][t])
            t=n;
        }
        i=0;
        for(f=0;f<k;f++)
        {
            if(a[i][t]>a[f][t])
            i=f;
        }
        if(i==m){

        printf("YES\n");
        printf("鞍点为%d %d\n",i,t);
        p=1;
        }
    }
    if(p==0)
    printf("NO");
    return 0;
}