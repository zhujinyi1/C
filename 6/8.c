//ͳ�Ƶ�������
#include<stdio.h>
int main()
{
  char a[1000];
  gets(a);
  int l,num=0,i;
  for(i=0;a[i]!='\0';i++);
  l=i;
  for(i=0;i<l;i++)
  {
      if(a[i]!=' ' && a[i+1]==' ')
          num++;
      if(a[i]!=' ' && a[i+1]=='\0')
          num++;
  }
  printf("%d\n",num);
  return 0; 
}

