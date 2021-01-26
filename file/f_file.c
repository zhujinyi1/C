//此文件用于测试文件的掌握程度，以及自己创建文件读写文件

#include<stdio.h>
int main()
{
    int x;
    FILE *fp;
    if((fp=fopen("C:\\Users\\Administrator\\Desktop\\procedure\\C-language\\file","wb+"))==NULL)
    {
        printf("open error!!!");
        exit(0);
    }
    
    printf("do your choice:\n");
    printf("1,write\n");
    printf("2,read");
    scanf("%d",&x);

    while(1)
    {
        switch(x)
        {
            case 1:
                f_w();
                break;
            case 2:
                f_r();
            default:
                x=3;
                break;            
        }
        if(x==3)
        {
            break;
        }
    }

    if(fclose(fp)==NULL)
    {
        printf("close error!");
        exit(0);
    }
    return 0;
}