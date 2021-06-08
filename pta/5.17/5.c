#include<stdio.h>
int a[10001],b[10001],d = 0;

void display(int a[],int n){
    int i;
    for(i = 1;i<=n;i++){
        printf("%d ",a[i]);
    }
    printf("\n");
}

void sort(int a[],int b[],int n,int x){
    int i = 0;
    if(x == n){
        display(b,n);
        return;
    }
    x++;
    for(i = 0;i<n;i++){
        if(a[i]!=1){
            a[i] = 1;
            b[x] =i+1;
            sort(a,b,n,x);
            a[i] = 0;
        }    
    }
    
    
}

int main(){
    int n,j;
    scanf("%d",&n);
    for(j = 0;j<n;j++){
        a[j] = 0;
    }
    sort(a,b,n,0);
    return 0;
}
