//…œ»˝Ω«æÿ’Û
#include<stdio.h>
int main()
{
    int a,n,b[10][10],i,f=1,j,k;
    scanf("%d",&a);
    for(k=1;k<=a;k++){
        f=1;
        scanf("%d",&n);
        for(i=0;i<n;i++)
            for(j=0;j<n;j++)
            {
                scanf("%d",&b[i][j]);
                if(i>j&&b[i][j]!=0){
                    f=0;
                }
            }
        if(f==1)
            printf("YES\n");
        if(f==0)
            printf("NO\n");
    }
    return 0;
}