/*祝津一
2004240205
排序
*/
#include<stdio.h>
int main()
{
	int n,i,c,b=1;
	int a[10];
	int f,t;
	for(;;){
	printf("enter n:");
	scanf("%d",&n);
	if(n>10||n<=0){
		printf("error");
	}
	else
		break;
	}
	for(i=0;i<n;i++){
		printf("输入第%d个数",i+1);
		scanf("%d",&a[i]);
	}
	for(c=0;c<n-1;c++)
	{
		f=c;
		for(b=c+1;b<n;b++){
			if(a[f]<=a[b]){
				t=a[f];
				a[f]=a[b];
				a[b]=t;
			}
		}
		
	}
	for(i=0;i<n;i++)
	{
		printf("%d",a[i]);
	}
	printf("\n");
	return 0;
}

