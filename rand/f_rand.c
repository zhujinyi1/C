#include<stdio.h>
#include<stdlib.h>
#include<time.h>
int main(){
    int a[10],i;
    srand(time(NULL));  //从系统中获取随机数
    for(i=0;i<10;i++){
        a[i]=rand()%100+1; //生成1——100的随机数
        printf("%d\n",a[i]);
    }

}