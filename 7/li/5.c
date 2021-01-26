/*
祝津一
2004240205
排序
*/
#include<stdio.h>
int main()
{
    int a[10],n,i,t,j,k,f,m;
    printf("请输入n\n");
    scanf("%d",&n);
    for(i=0;i<n;i++){
        printf("请输入第%d个数",i+1);
        scanf("%d",&a[i]);
    }
    for(m=0;m<n;m++){
        f=m;
        for(j=m+1;j<n;j++){
            if(a[f]>a[j]){
            t=a[f];
            a[f]=a[j];
            a[j]=t;
            }
        }
    }
    for(k=0;k<n;k++){
        printf("%2d ",a[k]);
    }
    return 0;
}