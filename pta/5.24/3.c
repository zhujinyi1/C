#include<stdio.h>
#include<stdlib.h>
typedef struct{
    int *elem;
    int length;
}Queue;

int main(){
    Queue q;
    int *p,*r;
    int i,n,sum = 0;
    scanf("%d",&n);
    q.length = 0;
    p = (int*)calloc(n,sizeof(int));
    q.elem = (int*)calloc(n,sizeof(int));
    for(i = 0;i<n;i++){
        scanf("%d",&p[i]);
    }
    for(i = 0;i<n;i++){
        if(q.length == 0||p[i]>p[i-1]){
            q.elem[q.length++] = p[i];
        }
        else{
            if(sum<q.length){
                sum = q.length;
                r = q.elem;
            }
            q.length = 0;
            q.elem = (int *)calloc(n,sizeof(int));
            i--;
        }
    }
    printf("%d",r[0]);
    for(i = 1;i<sum;i++)
        printf(" %d",r[i]);
    return 0;
}
/*
#include<stdio.h>
int main (void)
{
 int n,a[100005],i,left=0,right=0,thisl=0,maxl=0,t=0;
 
 scanf("%d",&n);
 for(i=0;i<n;i++)
  scanf("%d",&a[i]);
 for(i=0;i<n;i++)
 {
  thisl++;
  if(thisl>maxl){
   maxl=thisl;
   left=t;
   right=i;
  }
  if(a[i]>=a[i+1]){
   thisl=0;
   t=i+1;//t从下一个开始记
  } 
 
 }
 for(i=left;i<right;i++)
  printf("%d ",a[i]);
 printf("%d",a[i]); 
  
 return 0; 
}
*/