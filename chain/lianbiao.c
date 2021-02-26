/*链表*/
#include<stdio.h>
#include<stdlib.h>
#include<string.h>

//创建结构体
struct stu
{
    char name[12];
    int score;
    struct stu *next;
};
typedef struct stu NODE;              //定义，将结构体名字命名为NODE

/*
功能：创建链表
参数：无
返回值：链表头节点
*/
NODE *input() 
{
    NODE *head,*pnew,*tail;
    char a[12];

    if((head=(NODE *)malloc(sizeof(NODE)))==NULL)
    {
        printf("not enough space!");
        return NULL;
    }
    head->next=NULL;
    tail=head;
    while(1)
    {
        fflush(stdin);
        printf("input your name:(enter # to break)\n");
        gets(a);
        if(strcmp(a,"#")==0)
            break;
        pnew=(NODE *)malloc(sizeof(NODE));
        if(pnew==NULL)
        {
            printf("not enough space!");
            break;
        }
        else
        {
            strcpy(pnew->name,a);
            fflush(stdin);
            scanf("%d",&pnew->score);
        }
        pnew->next=NULL;
        tail->next=pnew;
        tail=pnew;
    }
    return (head);
} 

/*
功能：输出
参数：无
返回值：无
*/
void output(NODE * h)
{
    NODE *p;
    printf("姓名\t成绩\n");
    for(p=h->next;p!=NULL;p=p->next)
    {
        printf("%s\t%d\n",p->name,p->score);
    }
    printf("\n");
}

/*
功能：添加
参数：头节点
返回值：无 
*/
void add(NODE *head)
{
    NODE *p,*q,*new;
    int i,j;
    char a[12];
    p=head;
    p=p->next;
    for(i=0;p->next!=NULL;i++)
        p=p->next;
    printf("你想把它插到哪？？？(0~%d)",i);
    scanf("%d",&j);
    if(j<0||j>i)
    {
        printf("不存在这个节点");
    }

    else
    {
        while(j!=0)
        {
            p=p->next;
            j--;
        }
        q=p->next;
        new=(NODE *)malloc(sizeof(NODE));
        if(new==NULL)
        {
            printf("no enough memory!");
        }
        else
        {
            q=p->next;
            printf("enter name:");
            scanf("%s",a);
            strcpy(new->name,a);
            printf("enter score:");
            scanf("%d",&new->score);
            p->next=new;
            new->next=q;
        }
        
    }
    
}

/*
功能：删除
参数：头指针·
返回值：无
*/
void f_delete(NODE *h)
{
    NODE *p,*q;
    int i,j;
    p=p->next;
    for(i=0;p->next!=NULL;i++)
        p=p->next;
    printf("你想删掉谁(0~%d)",i);
    scanf("%d",&j);
    if(j<0||j>i)
    {
        printf("不存在这个节点");
    }
    while(j!=0)
    {
        p=p->next;
        j--;
    }
    q=p->next;
    
}

/*
功能：清理空间
参数：头节点
返回值：无
*/
void f_free(NODE *head)
{
    NODE *p;
    p = head;
    while (p != NULL)
    {
        head = p->next;
        free(p);
        p = head;
    }
    exit(0);
}

/*主函数*/
int main()
{
    int a;
    NODE * h=NULL;
    while(1)
    {
        printf("enter your choice:");
        scanf("%d",&a);
    
        switch(a)
        {
            case 1:
                h=input();
                break;              //创建链表
            case 2:
                output(h);
                break;              //输出链表
            case 3:
                add(h);             //插入
                break;
            case 4:
                f_delete(h);          //删除
                break;
            case 5:                 //释放内存
                f_free(h);
                break;
            default :printf("exit");exit(0);
        }
    }
    return 0;
}