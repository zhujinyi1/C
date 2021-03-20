#include<stdio.h>
int main ()
{
    long int n,x,a[n],result,flag=0,i;
    scanf("%d%d",&n,&x);
    for (i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
        if (a[i]==x)
        {
            result=i;
            flag=1;
        }
    }
    if (flag==1)
    printf("%d",result);
    else 
        printf("Not Found");
    return 0;
}