/*1234用递归实现全排列*/

#include<stdio.h>

int n = 4,c = 0;
int a[4]={1,2,3,4},vis[5]={0,0,0,0,0};

void show()
{
    int i;
    for(i=0;i<4;i++)
        printf("%d",a[i]);
    printf("\n");
}

/*
函数名：sort
功能：递归实现1234全排列
参数：i
返回值：无
*/
void sort(int dep)
{
    int j;
    if(dep > n)
    {
        c++;
        show();
        return;
    }

    for(j = 1;j <= n;j++){
        if(!vis[j]){
            vis[j] = 1;
            a[dep-1] = j;
            sort(dep+1);
            vis[j] = 0;
        }
    }


}

int main()
{
    sort(1);
    printf("有%d种情况",c);
    return 0;
}