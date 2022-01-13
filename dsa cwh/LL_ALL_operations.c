#include <stdio.h>
#include <stdlib.h>

struct Node
{
    int data;
    struct Node *next;
};

void linkedlistTraversal(struct Node *ptr)
{
    while (ptr != NULL)
    {
        printf("Element: %d\n", ptr->data);
        ptr = ptr->next;
    }
}

struct Node *linkedlistInsertAtFirst(struct Node *head, int data)
{
    struct Node *ptr = (struct Node *)malloc(sizeof(struct Node));
    ptr->next = head;
    ptr->data = data;
    return ptr;
};

struct Node *insertAfterNode(struct Node *head, int data, struct Node *prevNode)
{
    struct Node *ptr = (struct Node *)malloc(sizeof(struct Node));
    struct Node *p = head;
    ptr->data = data;
    ptr->next = prevNode->next;
    prevNode->next = ptr;
    return head;
};

struct Node *insertAtEnd(struct Node *head, int data)
{
    struct Node *ptr = (struct Node *)malloc(sizeof(struct Node));
    struct Node *p = head;
    ptr->data = data;
    while (p->next != NULL)
    {
        p = p->next;
    }
    p->next = ptr;
    ptr->next = NULL;
    return head;
};

struct Node *linkedlistDeleteFirst(struct Node *head)
{
    struct Node *ptr = head;
    head = head->next;
    free(ptr);
    return head;
};

struct Node *linkedlistDeleteIndex(struct Node *head, int index)
{
    struct Node * p=head;
    struct Node * q=head->next;
    for (int i = 0; i < index - 1; i++)
    {
        p = p->next;
        q = q->next;
    }
    p->next = q->next;
    free(q);
    return head;
};

struct Node *linkedlistDeleteValue(struct Node *head, int value)
{
    struct Node * p=head;
    struct Node * q=head->next;
    while (q->data == value && q->next != NULL)
    {
        p = p->next;
        q = q->next;
    }
    if (q->data == value)
    {
        p->next = q->next;
        free(q);
    }
    return head;
};

struct Node *linkedlistDeleteLast(struct Node *head)
{
    struct Node * p=head;
    struct Node * q=head->next;
    while (q->next != NULL)
    {
        p = p->next;
        q = q->next;
    }
    p->next = NULL;
    free(q);
    return head;
};

int main()
{
    struct Node *head = (struct Node *)malloc(sizeof(struct Node));
    struct Node *one = (struct Node *)malloc(sizeof(struct Node));
    struct Node *two = (struct Node *)malloc(sizeof(struct Node));
    struct Node *three = (struct Node *)malloc(sizeof(struct Node));
    struct Node *four = (struct Node *)malloc(sizeof(struct Node));
    struct Node *five = (struct Node *)malloc(sizeof(struct Node));

    head->data = 10;
    head->next = one;

    one->data = 20;
    one->next = two;

    two->data = 30;
    two->next = three;

    three->data = 40;
    three->next = four;

    four->data = 50;
    four->next = five;

    five->data = 60;
    five->next = NULL;

    printf("STarting linked list operations\n");
    printf("\nPrinting linked list\n");
    linkedlistTraversal(head);

    printf("\nInserting at first\n");
    head = linkedlistInsertAtFirst(head, 70);
    linkedlistTraversal(head);

    printf("\nInsert after a node\n");
    head = insertAfterNode(head, 55, two);
    linkedlistTraversal(head);

    printf("\nInsert at end\n");
    head = insertAtEnd(head, 100);
    linkedlistTraversal(head);

    printf("\nNow deletion operations in linked list\n");
    printf("\nPrinting linked list\n");

    printf("\nDeleting first node\n");
    head = linkedlistDeleteFirst(head);
    linkedlistTraversal(head);

    printf("\nDeleteing at an index\n");
    head = linkedlistDeleteIndex(head,4);
    linkedlistTraversal(head);

    printf("\nDeleteing by value\n");
    head = linkedlistDeleteValue(head, 40);
    linkedlistTraversal(head);

    printf("\nDeleteing last node\n");
    head = linkedlistDeleteLast(head);
    linkedlistTraversal(head);

    return 0;
}