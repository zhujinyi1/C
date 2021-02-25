#include <stdio.h>
#include <stdlib.h>

typedef struct link
{
    int data;
    struct link *next;
}*Link;

Link AppendNode(Link head,int data);
void DisplyNode(Link head);

int main()
{
    int    data;
    Link head = NULL;
    while (1)
    {
        scanf("%d",&data);
        if (data==-1)
            break;
        head = AppendNode(head,data);
    }
    DisplyNode(head);
    return 0;
}


/*在此实现 AppendNode函数 */
Link AppendNode(Link head,int data)
{
    Link pnew,p;
    if(NULL == head){
        head = (Link)malloc(sizeof(Link));
        head->next = NULL;
    }

    p = head;

    pnew = (Link)malloc(sizeof(Link));
    pnew->data = data;

    while(p->next!=NULL){
       p = p->next;
    }

    p->next = pnew;
    pnew->next =NULL;

    return head;

}

/*在此实现DisplyNode函数 */
void DisplyNode(Link head){
    Link p;
    if(NULL == head){
        printf("NULL");
        return;
    }
    p = head->next;
    
    while(p->next != NULL){
        printf("%d,",p->data);
        p = p->next;
    }
    printf("%d",p->data);
}