/*
祝津一
2004240205
找出不重合的数
*/
#include<stdio.h>
int main()
{
	int  i, j, c = 0;
	int a[10], b[10];
	printf("请输入10个数");
	for (i = 0; i < 10; i++)
	{
		scanf("%d", &a[i]);
	}
	printf("请输入10个数");
	for (j = 0; j <10; j++)
	{
		scanf("%d", &b[j]);
	}
	for (i = 0; i <10; i++) {
		c = 0;
		for (j = 0; j<10; j++) {
			if (a[i] == b[j]) {
				c = 1;
				break;
			}
		}
		if (c == 0)
			printf("%d\n", a[i]);
	}
	c = 1;
	for (j = 0; j <10; j++) {
		c = 0;
		for (i = 0; i <10; i++) {
			if (b[j] == a[i]) {
				c = 1;
				break;
			}
		}
		if (c == 0)
			printf("%d\n", b[j]);
	}
	return 0;
}