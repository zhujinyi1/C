#include<stdio.h>
int i = 0;
void hannuo(char a,char b,char c,int x){
    if(x == 0){
        return;
    }
    ++i;
    hannuo(a,c,b,x-1);
    printf("%c->%c\n",a,c);
    hannuo(b,a,c,x-1);
}

int main(){
    int n;
    char a = 'a',b = 'b',c = 'c';
    printf("请输入金盘的个数\n");
    scanf("%d",&n);
    hannuo(a,b,c,n);
    printf("需要移动%d次",i);
    return 0;
}
