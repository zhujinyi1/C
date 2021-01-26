/*
2004240205
×£½òÒ»
×Ö·û´®ÅÅÐò
*/
#include<stdio.h>
#include<string.h>
void fsort(char *color[],int n)
{
    int k,j;
    char *temp;
    for(k=1;k<n;k++)
    {
        for(j=0;j<n-k;j++)
            if(strcmp(color[j],color[j+1])==0)
            {
                temp=color[j];
                color[j]=color[j+1];
                color[j+1]=temp;
            }
    }

}
int main()
{
    int i;
    char *pcolor[]={"red","blue","yellow","green","black"};
    fsort(pcolor,5);
    for(i=0;i<5;i++)
    {
        printf("%s\n",pcolor[i]);
    }
    return 0;
}