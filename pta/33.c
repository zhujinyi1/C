//找鞍点
#include <stdio.h>
int main()
{
    int n,a[6][6],i,j,h,l,f=0,temp;
    scanf("%d",&n);
    for(i=0;i<n;i++)
        for(j=0;j<n;j++)
            scanf("%d",&a[i][j]);//输入数组
		if(n==1)
		{
		printf("0 0");
		return 0;}//特殊情况只有一个数字
     for(i=0;i<n;i++)
     {   
         for(j=1,temp=a[i][0];j<n;j++)
         {
             if(temp<a[i][j])
			 {
			 temp=a[i][j];
			 }
         }//找出一行的最大值存入temp

		  for(j=0;j<n;j++)
         {
             if(temp==a[i][j])//有可能每行有多个元素的值等于最大值
			 {
			l=j;   //固定该列
			 for(h=0,f=0;h<n;h++)//判断该元素是否为该列最小
         {
             if(temp>a[h][l])
                 f++;
         }
         if(!f)//最小就是鞍点
         {
             printf("%d %d",i,l);
             return 0;
         }
			 }
         }
        
     }
    printf("NONE");
    return 0;
}
