void reverseList(struct LNode **head, struct LNode **tail)
{
    if (*head == NULL || *tail == NULL)
        return;
    struct LNode *prev = NULL, *curr = NULL;
    while (*head != NULL)
    {
        prev = curr;
        curr = *head;
        *head = (*head)->next;
        curr->next = prev;
    }
    *head = curr;
}
int getLen(struct LNode **head)
{
    int count = 0;
    if (*head == NULL)
        return count;
    struct LNode *temp = *head;
    while (temp != NULL)
    {
        ++count;
        temp = temp->next;
    }
    return count;
}
void sortList(struct LNode **head)
{
    struct LNode *a, *b;
    int len = getLen(head);
    for (a = *head; a != NULL; a = a->next)
    {
        for (b = a; b != NULL; b = b->next)
        {
            if (b->value < a->value)
            {
                // swap value;
                int tempVal = a->value;
                a->value = b->value;
                b->value = tempVal;
            }
        }
    }
}
int main()
{
    printf("\n\n:::::::::: Doublly Linked List ::::::::::\n");
    struct LNode **head = (struct LNode **)malloc(sizeof(struct LNode *));
    struct LNode **tail = (struct LNode **)malloc(sizeof(struct LNode *));
    *head = NULL;
    *tail = NULL;
    int choice = 0;
    do
    {
        printf("\n0. Enter 0 to exit!");
        printf("\n1. Add element at the start of the list.");
        printf("\n2. Add element at the end of the list.");
        printf("\n3. Search for element.");
        printf("\n4. Search and add after.");
        printf("\n5. Search and add before.");
        printf("\n6. Display the list.");
        printf("\n7. Pop the head element.");
        printf("\n8. Pop the tail element.");
        printf("\n9. Search and delete.");
        printf("\n10. Reverse the list.");
        printf("\n11. Get length of the list.");
        printf("\n12. Sort the list in Ascending order.");
        printf("\nYour choice : ");
        scanf("%d", &choice);
        int inp, src;
        switch (choice)
        {
        case 0:
            printf("\n\nExit...!\n\n- by Krishna Mundada\n\n");
            break;
        case 1:
            printf("\n\nEnter element to add at start: ");
            scanf("%d", &inp);
            add(head, tail, inp);
            printf("\nElement added!!\n");
            break;
        case 2:
            printf("\n\nEnter element to add at end: ");
            scanf("%d", &inp);
            addToEnd(head, tail, inp);
            printf("\nElement added!!\n");
            break;
        case 3:
            printf("\n\nEnter element to search: ");
            scanf("%d", &inp);
            printf("\nElement %d is present: %d\n", inp, searchElement(head, inp));
            break;
        case 4:
            printf("\n\nEnter element to search and add after: ");
            scanf("%d", &src);
            printf("\n\nEnter element to add: ");
            scanf("%d", &inp);
            searchAdd(head, tail, src, inp, 1);
            printf("\n");
            break;
        case 5:
            printf("\n\nEnter element to search and add before: ");
            scanf("%d", &src);
            printf("\n\nEnter element to add: ");
            scanf("%d", &inp);
            searchAdd(head, tail, src, inp, 0);
            printf("\n");
            break;
        case 6:
            printf("\n");
            printLinkedList(head);
            printf("\n");
            break;
        case 7:
            pop(head);
            printf("\n\nElement popped!!\n");
            break;
        case 8:
            deleteElement(head, tail, (*tail)->value);
            printf("\n\nElement popped!!\n");
            break;
        case 9:
            printf("\n\nEnter element to delete: ");
            scanf("%d", &inp);
            deleteElement(head, tail, inp);
            printf("\n");
            break;
        case 10:
            reverseList(head, tail);
            printf("\n");
            break;
        case 11:
            printf("\n\nLength of the list is : %d", getLen(head)