/*
×£½òÒ»
2004240205
×Ö·û´®µ¹Ðò
*/
#include <stdio.h>
#include <string.h>
int main()
{
   char str[80];
   int i,j,k;
   i=0;
   while((str[i]=getchar())!='\n')
   {
       i++;
   }
   str[i]='\0';
   i=0;
   j=strlen(str)-1;
   for(i=0;i<j;i++,j--)
   {
   	 k=str[i];
   	 str[i]=str[j];
   	 str[j]=k;
   }
   printf("%s\n",str);
   return 0;
}