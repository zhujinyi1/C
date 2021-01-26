/*
祝津一
2004240205
转化十进制
*/
#include<stdio.h>
int main()
{
    int i,j,k=0,f=1;
    char str[80],a[80];
    printf("enter a string:\n");
    i=0;
    while((str[i]=getchar())!='#'){
    i++;
    }
    str[i]='\0';
    j=0;
    if(str[0]=='-'){
    f=-f;
    a[j]='-';
    j++;
    }
    for(i=0;str[i]!='\0';i++){
        if(str[i]>='0'&&str[i]<='9'||str[i]>='a'&&str[i]<='f'||str[i]>='A'&&str[i]<='F')
        {
            a[j]=str[i];
            j++;
        }
    }
    a[j]='\0';
    printf("%s\n",a);
    j=0;
    while(a[j]!='\0')
    {
        if(a[j]>='0'&&a[j]<='9')
        k=k*16+a[j]-'0';
        if(a[j]>='a'&&a[j]<='f')
        k=k*16+a[j]-'a'+10;
        if(a[j]>='A'&&a[j]<='F')
        k=k*16+a[j]-'A'+10;
        j++;
    }
    k=k*f;
    printf("%ld",k);
    return 0;
}