#include <stdio.h>
#include <stdlib.h>

struct link
{
    int data;
    struct link *next;
};

struct link *AppendNode(struct link *head, int data);
void DisplyNode(struct link *head);
void DeleteMemory(struct link *head);

int main()
{
    char c;
    int data = 0;
    struct link *head = NULL; /* 链表头指针 */
    while (1)
    {
        scanf("%d", &data);
        if (data == -1)
            break;

        head = AppendNode(head, data); /* 向head为头指针的链表末尾添加节点 */
    }
    DisplyNode(head);   /* 显示当前链表中的各节点信息 */
    DeleteMemory(head); /* 释放所有动态分配的内存 */
    return 0;
}

/*在此实现 struct link *AppendNode(struct link *head,int data); */
struct link *AppendNode(struct link *head, int data)
{
    struct link *pnew, *p;
    if (head == NULL)
    {
        head = (struct link *)malloc(sizeof(struct link));
        head->next = NULL;
    }
    p = head;
    pnew = (struct link *)malloc(sizeof(struct link));
    pnew->data = data;
    while (p->next != NULL)
    {
        p = p->next;
    }
    p->next = pnew;
    pnew->next = NULL;
    return head;
}
/*在此实现 void DisplyNode(struct link *head); */
void DisplyNode(struct link *head)
{
    struct link *p;
    p = head->next;
    while (p->next != NULL)
    {
        printf("%d->", p->data);
        p = p->next;
    }
    p->next = NULL;
    printf("%d", p->data);
}
/*在此实现 void DeleteMemory(struct link *head);*/
void DeleteMemory(struct link *head)
{
    struct link *p;
    p = head;
    while (p != NULL)
    {
        head = p->next;
        free(p);
        p = head;
    }
}
