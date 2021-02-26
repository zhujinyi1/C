
#include<stdio.h>
#include<stdlib.h>
#include<string.h>

struct node
{
    int num;
    int score;
    struct node* next;
};

struct node *f_build();

int main()
{
    struct node *head=NULL;
    int choice;
    printf("输入你的选择\n");
    printf("1、新建\n");
    printf("2、增加\n");
    printf("3、删除\n");
    printf("4、修改\n");
   // printf("5、查找\n");
    printf("5、打印\n");
    printf("0、退出\n");
    scanf("%d",&choice);
    while(1)
    {
        switch(choice) {
            case 1:head=f_build();break;
     //       case 2:head=f_add(head);break;
     //       case 3:head=f_delete(head);break;
     //       case 4:head=f_change(head);break;
     //       case 5:f_print(head);beak;
     //       case 0: printf("退出");exit(0);
            default :printf("输入错误，重新输入\n");exit(0);
        }
        printf("输入你的选择\n");
        scanf("%d", &choice);
    }
    return 0;
}

struct node* f_build()
{
    int x;
    struct node *head,*p,*pnew;
    head=(struct node*)malloc(sizeof(struct node));
    if(head==NULL)
    {
        printf("not enough memory");
        return NULL;
    }

    p=head;
    head->next=NULL;

    printf("是否新建:1、是\t0、否\n");
    scanf("%d",&x);
    while(x != 0)
    {
        pnew=(struct node *)malloc(sizeof(struct node));
        if(pnew==NULL)
        {
            printf("NOt enough memory");
            return NULL;
        }
        printf("输入学号:");
        scanf("%d",&pnew->num);
        printf("输入成绩\n");
        scanf("%d",&pnew->score);
        p->next=pnew;
        pnew->next=NULL;
        p=pnew;
        printf("是否新建:1、是\t0、否\n");
        scanf("%d", &x);
    }
    return head;
}

