//本题要求编写程序，以hh:mm:ss的格式输出某给定时间再过n秒后的时间值（超过23:59:59就从0点开始计时）。
#include<stdio.h>
int main()
{
    int h,m,s,t;
    scanf("%d:%d:%d",&h,&m,&s);
    scanf("%d",&t);
    h=(h+(m+(t+s)/60)/60)%24;
    m=(m+(t+s)/60)%60;
    s=(s+t)%60;
    printf("%02d:%02d:%02d",h,m,s);
    return 0;
}