/*
祝津一
2004240205
查找书
*/
#include<stdio.h>
struct books{
    char name[80];
    float price;
}b[10];
int main()
{
    int i,l=0,h=0;
    for(i=0;i<10;i++)
    {
        printf("请输入第%d本书的书名:",i+1);
        scanf("%s",&b[i].name);
        printf("请输入价格:");
        scanf("%f",&b[i].price);
    }
    for(i=0;i<10;i++)
    {
        if(b[i].price>=b[h].price)
        h=i;
        if(b[i].price<=b[l].price)
        l=i;
    }   
    printf("价格最高的书：\n");
    printf("书名\t\t价格\n");
    printf("%s\t\t%.2f\n",b[h].name,b[h].price);
    printf("价格最低的书：\n");
    printf("书名\t\t价格\n");
    printf("%s\t\t%.2f\n",b[l].name,b[l].price);
    return 0;
}