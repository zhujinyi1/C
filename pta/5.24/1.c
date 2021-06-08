#include<stdio.h>
int main(){
    int M[21][21];
    int i,j,x = 0;
    int m,n;
    scanf("%d %d",&m, &n);
    for(i = 1;i<m;i++){
        for(j = 1;j<=n;j++){
            scanf("%d",&M[i][j]);
        }
    }
    for(i = 2;i<=m-1;i++){
        for(j = 2;j<=n-1;j++){
            if(M[i][j]>M[i-1][j]&&M[i][j]>M[i+1][j]&&M[i][j]>M[i][j-1]&&M[i][j]>M[i][j+1]){
                printf("%d %d %d\n",M[i][j],i,j);
                x++;
            }
        }
    }
    if(x==0){
        printf("None %d %d",m,n);
    }
    return 0;
}