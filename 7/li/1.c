/*祝津一
2004240205
输出大于平均值的数
*/
#include<stdio.h>
int main()
{
    int i;
    double a[10],sum,ave;
    for(i=0;i<10;i++)
    {
        printf("请输入第%d个数",i+1);
        scanf("%lf",&a[i]);
        sum=sum+a[i];
    }
    ave=sum/10;
    for(i=0;i<10;i++)
    {
        if(a[i]>=ave)
        printf("%.2lf\n",a[i]);
    }
    return 0;
}