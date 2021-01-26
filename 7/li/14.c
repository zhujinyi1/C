/*
×£½òÒ»
2004240205
Êä³öÊı
*/
#include<stdio.h>
int main()
{
    int i,j,k,s=0;
    char a[80],b[80];
    printf("enter a string:\n");
    i=0;
    while((a[i]=getchar())!='#')
    i++;
    a[i]='\0';
    k=0;
    for(i=0;a[i]!='\0';i++){
        if(a[i]>='0'&&a[i]<='9'||a[i]>='a'&&a[i]<='f'||a[i]>='A'&&a[i]<='F')
        {
            b[k]=a[i];
            k++;
        }
    }
    b[k]='\0';
    k=0;
    while(b[k]!='\0')
    {
        putchar(b[k]);
        k++;
    }
    for(i=0;b[i]!='\0';i++){
        if(b[i]>='0'&&b[i]<='9')
        s=s*16+b[i]-'0';
        if(b[i]>='a'&&b[i]<='f')
        s=s*16+b[i]+10-'a';
        if(b[i]>='A'&&b[i]<='F')
        s=s*16+b[i]+10-'A';
    }
    printf("\n%ld\n",s);
    return 0;
}