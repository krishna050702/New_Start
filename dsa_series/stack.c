#include<stdio.h>
#include<stdlib.h>

struct Stack {
    int size;
    int top;
    int *arr;
};

int isEmpty(struct Stack* ptr)
{
    if(ptr->top==-1)
    return 1;
    else
    return 0;
}

int isFull(struct Stack* ptr)
{
    if(ptr->size==ptr->size-1)
    return 1;
    else
    return 0;
}

int main()
{
    // struct Stack s;
    // s.size=80;
    // s.top=-1;
    // s.arr=(int *)malloc(s.size*sizeof(int));

    struct Stack *s;
    s->size=80;
    s->top=-1;
    s->arr=(int *)malloc(s->size*sizeof(int));

     

    if(isEmpty(s))
    printf("This stack is empty");
    else
    printf("This stack is not empty");

}