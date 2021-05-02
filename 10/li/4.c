/*
祝津一
2004240205
汉诺塔问题
*/
#include<stdio.h>
int i=0;                                      //记录递归的层次数量
hanoi(n,a,b,c)
{
	
	if(n>0)
	{
		if (n==1)  printf("%c→%c\n",a,c);
		else
		{
			hanoi(n-1,a,c,b);                 //第一步
			++i;
			printf("%c→%c\n",a,c);      //第二步
			hanoi(n-1,b,a,c);                  //第三步
		}
	}
	else printf("n<=0 is err.!");
}

int main()
{
	int n;
	printf("请输入金盘的数量:");
	scanf("%d",&n);
	printf("\n%d个盘移动的步骤是:\n",n);
	hanoi(n,'a','b','c');
	printf("总共有递归:%d   层!\n",i);
}
