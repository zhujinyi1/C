/*
1,功能:计算字符串长度
2，参数:字符串首地址
3，返回值:字符串实际长度
*/
#include<stdio.h>
int fstrlen(char str[])
{
    int n=0;//返回字符串长度
    while(str[n]!='\0')
    n++;
    return n;
}
/*
1.功能：链接字符串
2.参数：*s1,*s2
3.返回值：无  
*/
char f_strcpy(char *s1,char *s2)
{
    char t[80]={0};
    int i,j;
    for(i=0;s1[i]!='\0';i++)
        t[i]=s1[i];
    for(i=0;s2[i]!='\0';j++,i++)
        t[i]=s2[j];
}
/*
功能：字符串复制
参数：目的字符串，源字符串
返回值：无
*/
void fstrcpy(char s2[],char s1[])
{
    int i=0;
    while(s1[i]!='\0'){
        s2[i]=s1[i];
        i++;
    }
    s2[i]='\0';//给s2一个结尾
}
/*
功能：字符串比较（比大小）
参数：两个字符串
返回值： 1  s1>s2;
        -1  s1<s2;
        0   s1=s2;
*/
int fstrcmp(char s1[],char s2[])
{
    int i=0;
    while(s1[i]!='\0'&&s2[i]!='\0')
    {
        if(s1[i]<s2[i])  return -1;
        if(s1[i]>s2[1])  return 1;
        i++;
    }
    return 0;
}
#define N 5
int main()
{
    char s[N][80],temp[80];
    int i,j,index=0;
    for(i=0;i<N;i++)
    {
        gets(s[i]);
    }
    for(i=0;i<N-1;i++)
    {
        index=i;
        for(j=i+1;j<N;j++)
        if(fstrcmp(s[j],s[index])<0)
        index=j;
        if(i!=index){
            fstrcpy(temp,s[i]);
            fstrcpy(s[i],s[index]);
            fstrcpy(s[index],temp);
        }
    }
    for(i=0;i<N;i++)
    puts(s[i]);//输出字符串
    return 0;
}