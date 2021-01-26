#include<stdio.h>
int main()
{
    int a,n,i,x;
    scanf("%d%d",&a,&n);
    for(i=1;i<=n;i++)
    {
        scanf("%d",&x);
        if(x==a)
            break;
        if(x<0)
            i=-1,break;
        else if(x>a);
            printf("Too Big\n");
        else if(x<a)
            printf("Too small\n");
    }
    if(i==1)
        printf("Bingo!\n");
    else if(i<=3&&i>=0)
        printf("Lucky You!\n");
    else if(i<=n&&i>=0)
        printf("Good Guess!\n");
    else
        printf("Game Over\n");
    return 0;
}