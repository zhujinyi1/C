/*
祝津一
2004240205
奇数值结点链表
*/
#include<stdio.h>
#include<stdlib.h>
struct a{
    int num;
    struct a *next;
};
int main()
{
    struct a *L=NULL,*last,*ptr,*ptr1,*ptr2,*NEW;
    int num;
    do{
        scanf("%d",&num);
        if(num!=-1){
            struct a *p=(struct a*)malloc(sizeof(struct a));
            p->num=num;
            p->next=NULL;
            if(L==NULL){
                L=p;
            }
            else
            {
                last->next=p;
            }
            last=p;
        }
    }while(num!=-1);
    while(L!=NULL&&L->num%2==0){
        ptr2=L;
        L=L->next;
        free(ptr2);
    }
    if(L==NULL)
    {
        NEW=L;
    }
    ptr1=L;
    ptr2=L->next;
    while(ptr2!=NULL){
        if(ptr2->num%2==0){
            ptr1->next=ptr2->next;
            free(ptr2);
        }
        else
        {
            ptr1=ptr2;
        }
        ptr2=ptr1->next;
    }
    if(NEW=NULL){
        printf("\nNEW中不含任何信息\n");
        return 0;
    }
    printf("NEW中链表为");
    for(ptr=L;ptr!=NULL;ptr=ptr->next)
        printf("%d",ptr->num);
    return 0;
}