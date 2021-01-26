#include<stdio.h>
int main()
{
    int a[1000],i,n,A,B,C,D,E;
    A=B=C=D=E=0;
    scanf("%d",&n);
    for(i=0;i<n;i++){
        scanf("%d",&a[i]);
    }
    for(i=0;i<n;i++)
    {
    if(a[i]>=90&&a[i]<=100)
        A++;
    else if(a[i]<90&&a[i]>=80)
        B++;
    else if(a[i]<80&&a[i]>=70)
        C++;
    else if(a[i]<70&&a[i]>=60)
        D++;
    else if(a[i]>=0&&a[i]<60)
        E++;
    }
    printf("%d %d %d %d %d",A,B,C,D,E);
    return 0;
}