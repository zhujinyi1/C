/*\×£½òÒ»
2004240205
¼ÆËãºÍ²î
*/
#include<stdio.h>
void s(float op1, float op2, float* ps, float* pd);
int main()
{
	float op1, op2;
	float sum, diff;
	printf("pls enter op1:");
	scanf("%f", &op1);
	printf("pls enter op2:");
	scanf("%f", &op2);
	s(op1, op2, &sum, &diff);
	printf("sum=%f,diff=%f\n", sum,diff);
	return 0;

}
void s(float op1, float op2, float* ps, float* pd)
{
	*ps = op1 + op2;
	*pd = op1- op2;
}
