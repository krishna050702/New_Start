#include<stdio.h>
#include<stdlib.h>

struct Node
{
    int data;
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

struct Node * insertAtFirst(struct Node *head,int data)
{
    struct Node * ptr=(struct Node *)malloc(sizeof(struct Node));
    ptr->next=head;
    ptr->data=data;
    return ptr;
};

struct Node * insertAtIndex(struct Node *head,int data,int index)
{
    struct Node * ptr=(struct Node *)malloc(sizeof(struct Node));
    struct Node *p=head;
    int i=0;
    while(i!=index-1)
    {
        p=p->next;
        i++;
    }
    ptr->data=data;
    ptr->next=p->next;
    p->next=ptr;
    return head;
};

struct Node * insertAtEnd(struct Node * head,int data)
{
    struct Node* ptr=(struct Node*)malloc(sizeof(struct Node));
    struct Node*p=head;
    ptr->data=data;
    
    while(p->next!=NULL)
    {
        p=p->next;
        
    }
    p->next=ptr;
    ptr->next=NULL;
    return head;
}


struct Node * insertAfterNode(struct Node * head,struct Node * prevNode,int data)
{
    struct Node* ptr=(struct Node*)malloc(sizeof(struct Node));
    struct Node*p=head;
    ptr->data=data;
    ptr->next=prevNode->next;
    prevNode->next=ptr;
    return head;
}

int main()
{
    struct Node *head=(struct Node *)malloc(sizeof(struct Node));
    struct Node *second=(struct Node *)malloc(sizeof(struct Node));
    struct Node *third=(struct Node *)malloc(sizeof(struct Node));
    struct Node *fourth=(struct Node *)malloc(sizeof(struct Node));

    head->data=7;
    head->next=second;
    
    second->data=14;
    second->next=third;

    third->data=40;
    third->next=fourth;

    fourth->data=50;
    fourth->next=NULL;

    linkedlistTraversal(head);
    head=insertAtFirst(head,70);
    printf("updated\n\n");

    head=insertAtIndex(head,90,3);
    printf("updated\n\n");
    linkedlistTraversal(head);

    head=insertAtEnd(head,5);
    printf("updated\n\n");
    linkedlistTraversal(head);

    head=insertAfterNode(head,second,55);
    printf("updated\n\n");
    linkedlistTraversal(head);
    return 0;
}