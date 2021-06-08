#include<stdio.h>
int main(){
    //测试数据：fdsfsf ggf 542 
    char a[80];
    scanf("%[^\n]",a);
    printf("%s",a);
    return 0;
}