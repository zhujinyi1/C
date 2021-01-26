#include<stdio.h>
int main()
{
  int a,b,c,x;
  scanf("%d%d%d",&a,&b,&c);
  if(a+b>c&&a+c>b&&b+c>a)
  {
    if(a*a+b*b>c*c&&a*a+c*c>b*b&&b*b+c*c>a*a)
      x=3;
    if(a*a+b*b==c*c||a*a+c*c==b*b||b*b+c*c==a*a)
      x=1;
    if(a*a+b*b<c*c||a*a+c*c<b*b||b*b+c*c<a*a)
      x=2;
  }
  else
  {
    x=0;
  }
  printf("%d",x);
  return 0;
}