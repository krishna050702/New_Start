#include<stdio.h>
#include<stdlib.h>
struct Node
{
    int data;
    struct Node * next;
};

void linkedListTraversal(struct Node * head)
{
    struct Node *ptr=head;
    do
    {
        printf("Element is %d\n",ptr->data);
        ptr=ptr->next;
    }while(ptr!=head);
}

struct Node * insertAtFirst(struct Node * head,int data)
{
    struct Node *ptr=(struct Node *)malloc(sizeof(struct Node));
    ptr->data=data;
    struct Node *p=head->next;

    while(p->next!=head)
    {
        p=p->next;
    }
    //last node of list is pointed by p
    p->next=ptr;
    ptr->next=head;
    head=ptr;
    return head;
}

int main()
{
    struct Node * head=(struct Node *)malloc(sizeof(struct Node));
    struct Node * second=(struct Node *)malloc(sizeof(struct Node));
    struct Node * third=(struct Node *)malloc(sizeof(struct Node));
    struct Node * fourth=(struct Node *)malloc(sizeof(struct Node));
    struct Node * fifth=(struct Node *)malloc(sizeof(struct Node));

    head->data=10;
    head->next=second;

    second->data=20;
    second->next=third;

    third->data=30;
    third->next=fourth;
    
    fourth->data=40;
    fourth->next=fifth;

    fifth->data=50;
    fifth->next=head;

    linkedListTraversal(head);
    printf("\nPreforming insertion: \n");
    head=insertAtFirst(head,45);
    linkedListTraversal(head);

    return 0;
}