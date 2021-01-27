//еепР
#include<stdio.h>
int main()
{
    int a[10],b,i,j,t;
    scanf("%d",&b);
    for(i=0;i<b;i++){
        scanf("%d",&a[i]);
    }
     for(i=0;i<b;i++){
         for(j=i;j<b;j++){
             if(a[i]<=a[j]){
                 t=a[i];
                 a[i]=a[j];
                 a[j]=t;
                }
            }
        }
     for(i=0;i<b-1;i++){
         printf("%d ",a[i]);
     }
     printf("%d",a[i]);
     return 0;
}