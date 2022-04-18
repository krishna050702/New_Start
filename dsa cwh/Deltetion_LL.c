#include<stdio.h>
#include<stdlib.h>

struct Node
{
    int data;
    // int next;
    struct Node *next; 
};

void linkedlistTraversal(struct Node* ptr)
{
    while (ptr!=NULL)
    {
        printf("Element: %d\n",ptr->data);
        ptr=ptr->next;
    }
}

struct Node * deleteFirst(struct Node * head)
{
    struct Node *ptr=head;
    head=head->next;
    free(ptr);
    return head;
}

struct Node * deleteIndex(struct Node * head,int index)
{
    struct Node * p=head;
    struct Node * q=head->next;
    for(int i=0;i<index-1;i++)
    {
        p=p->next;
        q=q->next;
    }
    p->next=q->next;
    free(q);
    return head;
}

struct Node * deleteLast(struct Node * head)
{
    struct Node *p=head;
    struct Node *q=head->next;
    while(q->next!=NULL)
    {
        p=p->next;
        q=q->next;
    }
    p->next=NULL;
    free(q);
    return head;
}


struct Node * deleteValue(struct Node * head,int value)
{
    struct Node * p=head;
    struct Node * q=head->next;
    while(q->data!=value && q->next!=NULL)
    {
        p=p->next;
        q=q->next;
    }
   if(q->data==value)
   {
       p->next=q->next;
       free(q);
   }
    return head;
}

int main()
{
    struct Node *head=(struct Node *)malloc(sizeof(struct Node));
    struct Node *second=(struct Node *)malloc(sizeof(struct Node));
    struct Node *third=(struct Node *)malloc(sizeof(struct Node));
    struct Node *fourth=(struct Node *)malloc(sizeof(struct Node));
    struct Node *fifth=(struct Node *)malloc(sizeof(struct Node));

    head->data=7;
    head->next=second;
    
    second->data=14;
    second->next=third;

    third->data=40;
    third->next=fourth;

    fourth->data=50;
    fourth->next=fifth;

    fifth->data=60;
    fifth->next=NULL;

    printf("Linked list before deletion\n");
    linkedlistTraversal(head);

    head=deleteFirst(head);
    printf("\nLinked list after deletion\n");
    linkedlistTraversal(head);

    printf("\nusing deletion at a node\n");
    head=deleteIndex(head,2);
    linkedlistTraversal(head);

    printf("\n deletion last \n");
    head=deleteLast(head);
    linkedlistTraversal(head);

     printf("\n deletion with given value \n");
    head=deleteValue(head,40);
    linkedlistTraversal(head);

    return 0;
}