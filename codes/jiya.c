#include <stdio.h>
#include <conio.h>
#include <stdlib.h>
#define Size 4

int stk[Size], top = -1;
void Push();
void Pop();
void Show();
void Peek();

int main()
{
    
    
    while (1)
    {
        int choice=0;
    printf("\nOperations performed by Stack");
    printf("\n1.Push the element\n2.Pop the element\n3.Show\n4.Peek\n5.Exit");
    printf("\n\nEnter the choice:");
    scanf("%d", &choice);

        switch (choice)
        {
        case 1:
            Push();
            break;
        case 2:
            Pop();
            break;
        case 3:
            Show();
            break;
        case 4:
            Peek();
            break;
        case 5:
            exit(0);

        default:
            printf("\nInvalid choice!!");
        }
    }
}

void Push()
{

    if (top == Size-1)
    {
        printf("Stack over flow");
    }
    else
    {
        int val;
        printf("Enter the value to be pushed on the top of stack");
        scanf(" %d", &val);
        top++;
        stk[top] = val;
    }
}

void Pop()
{

    if (top == -1)
    {
        printf("Stack under flow");
    }
    else
    {
        int val;
        val = stk[top];
        top--;
    }
}

void Show()
{

    printf("The elements present in the stack are");
    for (int i = top; i >= 0; --i)
    {
        printf(" %d", stk[i]);
    }
}

void Peek()
{

    printf("The top most element of the stack is: %d", stk[top]);
}