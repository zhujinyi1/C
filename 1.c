#include<stdio.h>
void s(int a[]){
    int t;
    t = a[1];
    a[1] = a[0];
    a[0] = t;

}
int main(){
    int a[2];
    scanf("%d %d",&a[0],&a[1]);
    s(a);
    printf("%d %d",a[0],a[1]);
}