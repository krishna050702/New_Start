#include <stdio.h>
#include <stdlib.h>

struct stack
{
    int size;
    int top;
    int *arr;
};

int isFull(struct stack *ptr)
{
    if (ptr->top == ptr->size - 1)
        return 1;
    else
        return 0;
}

int isEmpty(struct stack *ptr)
{
    if (ptr->top == -1)
        return 1;
    else
        return 0;
}

void push(struct stack *ptr, int val)
{
    if (isFull(ptr))
        printf("Stack overflow\n");
    else
    {
        ptr->top++;
        ptr->arr[ptr->top] = val;
    }
}

int pop(struct stack *ptr)
{
    if (isEmpty(ptr))
        printf("Stack underflow\n");
    else
    {
        int val = ptr->arr[ptr->top];
        ptr->top--;
        return val;
    }
}

int peak(struct stack *sp, int i)
{
    int arrayInt = sp->top - i + 1;
    if (arrayInt < 0)
    {
        printf("Not a valid position\n");
        return -1;
    }

    else
    {
        return sp->arr[arrayInt];
    }
}
int main()
{
    struct stack *sp = (struct stack *)malloc(sizeof(struct stack));
    sp->size = 10;
    sp->top = -1;
    sp->arr = (int *)malloc(sp->size * sizeof(int));
    printf("Stack has been created successfully\n");

    printf("%d\n", isFull(sp));
    printf("%d\n", isEmpty(sp));

    push(sp, 40);
    push(sp, 8);
    push(sp, 9);
    printf("Popped %d from the stack\n", pop(sp));

    for(int j=0;j<sp->top+1;j++)
    {
    printf("The value at index %d is %d\n",j,peak(sp,j));

    }


    return 0;
}