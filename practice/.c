#include<stdio.h>
double fun(int a[],int n)
{
    double s=0;
    int j,t=0,f=n-1,m;
    for(j=0;j<n;j++)
    {
        if(a[j]>a[t])
        {
            m=a[j];
            a[j]=a[t];
            a[t]=m;
        }
        if(a[j]<a[f])
        {
            m=a[j];
            a[j]=a[f];
            a[f]=m;
        }
    }
    for(j=1;j<n-1;j++)
    {
        s=s+a[j];
    }
    s=s/(n-2);
    return s;
}
int main()
{
    double ave=0;
    int a[80],n,i,s;
    scanf("%d",&n);
    for(i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
    }
    ave=fun(a,n);
    printf("%d",(int)ave);
    return 0;
}
