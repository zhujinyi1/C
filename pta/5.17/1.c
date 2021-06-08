#include<stdio.h>
int main(){
    int a,sum = 0;
    char ch;
    while((ch = getchar())!=']'){
        scanf("%d",&a);
        sum += a;
    }
    
    printf("%d",sum);
    return 0;
}