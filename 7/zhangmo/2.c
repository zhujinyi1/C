/*
祝津一
2004240205
统计出现最多的数
*/
#include<stdio.h>

int main()
{

    int N,i,number,max=0,a[10]={0};
    scanf("%d",&N);

    for(i=0;i<N;i++){

        scanf("%d",&number);

        while(number>0){

            a[number%10]++;
            number/=10;

        }
    }

    for(i=0;i<10;i++){

        if(max<a[i]) max=a[i];

    }

    printf("%d:",max);

    for(i=0;i<10;i++){

        if(max==a[i]) printf(" %d",i);
    }

    return 0;

}

