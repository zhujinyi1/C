// #include<stdio.h>
// int main(){
//     int a[100][100];
//     int i,j,m,l,n,k,sum=0,index = 0,index1 = 0;
//     scanf("%d",&n);
//     for(i = 0;i<n;i++){
//         for(j = 0;j<n;j++){
//             scanf("%d",&a[i][j]);
//         }
//     }
//     for(i = 0;i<n;i++){
//         index = index1 = 0;
//         for(j = 0;j<n;j++){
//             if(a[i][j]>a[i][index]){
//                 index = i;
//             }
//             for(k = 0;k<n;j++){
//                 if(a[i][index] == a[i][k]){
//                     for(m = 0;m<n;m++){
//                         if(a[index1][k]>a[m][k]){
//                             index1 = m;
//                             for(l = 0;l<n;l++){
//                                 if(a[index1][k]==a[l][k]){
//                                     sum++;
//                                 }
//                             }
//                         }
//                     }
//                 }
//             }
//         }
//     }
//     printf("%d",sum);
//     return 0;
// }
#include<stdio.h>
int count=0;
void f(int k,int max,int a[][6],int n);
int main()
{
    int n,i,j,k;
    int max;
    int a[6][6];
    int b[6];
    scanf("%d",&n);
    for(i=0;i<n;i++)
        for(j=0;j<n;j++)
            scanf("%d",&a[i][j]);
    for(i=0;i<n;i++)
    {
        max=a[i][0];
         for(j=1;j<n;j++)
             if(a[i][j]>max)
                 max=a[i][j];
       for(j=0;j<n;j++)
       {
           if(a[i][j]==max)
           {
                k=j;
                f(k,max,a,n);
           }
       }
    }
    printf("%d",count);
    return 0;
}
void f(int k,int max,int a[][6],int n)
{
    int j;
      for(j=0;j<n;j++)
          if(max<=a[j][k]);
          else break;
            if(j==n)
                count++;
}