/*
祝津一
2004240205
输出最小值和其下标
*/
#include<stdio.h>
int main()
{
    int a[10],i,j,b,c=1;
    for(i=0;i<10;i++){
        printf("请输入第%d个数\n",i+1);
        scanf("%d",&a[i]);
    }
    for(j=0;j<10;j++){
        c=1;
        for(b=0;b<10;b++){
            if(a[j]>a[b]){
                c=0;
                break;
            }
        }
        if(c==1)
            {
                printf("最小的数是%d\n",a[j]);
                printf("下标为%d\n",j);
            }
    }
}