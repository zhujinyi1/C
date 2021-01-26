#include<stdio.h>
int main()
{
    int n=5,i,j,t,m,a[5]={1,5,7,3,9};
    for(i=0;i<n;i++)
    {
        m=i;
        for(j=i;j<n;j++)
        {
            if(a[j]>=a[m])
            {
                t=a[i];
                a[i]=a[j];
                a[j]=t;
            }
        }
    }
    for(i=0;i<n;i++)
    printf("%d",a[i]);
}