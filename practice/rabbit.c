
#include<stdio.h>
int main()
{
    int x,a[10000]={0},n,i,c=0,j=1;
    scanf("%d%d",&x,&n);
    while(j<=x)
    {
        for(i=0;i<n;i++)
        {
            if((i+1)%j==0)
            {
                if(a[i]==1)
                    a[i]=0,c--;
                else
                    a[i]=1,c++;
            }
        }
        j++;
    }
    printf("%d\n",c);
    return 0;
}