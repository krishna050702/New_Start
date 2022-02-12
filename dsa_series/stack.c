#include<stdio.h>
#include<stdlib.h>
 
struct stack{
    int size ;
    int top;
    int * arr;
};
 
int isEmpty(struct stack* ptr){
    if(ptr->top == -1){
            return 1;
        }
        else{
            return 0;
        }
}
 
int isFull(struct stack* ptr){
    if(ptr->top == ptr->size - 1){
        return 1;
    }
    else{
        return 0;
    }
}
 
void push(struct stack* ptr, int val){
    if(isFull(ptr)){
        printf("\nStack Overflow! Cannot push %d to the stack\n", val);
    }
    else{
        ptr->top++;
        ptr->arr[ptr->top] = val;
    }
}
 
int pop(struct stack* ptr){
    if(isEmpty(ptr)){
        printf("\nStack Underflow! Cannot pop from the stack\n");
        return -1;
    }
    else{
        int val = ptr->arr[ptr->top];
        ptr->top--;
        return val;
    }
}

int Peek(struct stack *s, int i){
    int cal = s->top - i + 1;
    if(cal<0){
        printf("\nNot avalid Position for Stack");
    }
    else{
        return s->arr[cal];
    }
}

void show(struct stack *sp){
    int counter = sp->top;
    printf("\nElement: \n");
    while(counter!=-1){
        printf("%d\n", sp->arr[counter]);
        counter--;
    }
}
 
int main(){
    struct stack *sp = (struct stack *) malloc(sizeof(struct stack));
    sp->size = 100;
    sp->top = -1;
    sp->arr = (int *) malloc(sp->size * sizeof(int));
    // printf("Stack has been created successfully\n");
    int c;
    int a, j;

    while(c!=5){
        printf("\nChoose:\n1. Push\n2. Pop\n3. Peek\n4. Show\n5. Exit\nEnter Choice: ");
        scanf("%d", &c);
        switch(c){
            case 1: 
                printf("\nEnter element to push: ");
                scanf("%d", &a);
                push(sp, a);
                break;
            case 2: 
                printf("\nPopped element: %d\n", pop(sp));
                break;
            case 3: 
                printf("\nEnter Index: ");
                scanf("%d", &j);
                printf("\nElement at %d position is %d\n", j, Peek(sp, j));
                break;
            case 4: 
                show(sp);
                break;
            case 5: 
                break;
        };
    }
    return 0;
}




// #include<stdio.h>
// #include<stdlib.h>
 
// struct stack{
//     int size ;
//     int top;
//     int * arr;
//     int num;
// };
 
// int isEmpty(struct stack* ptr){
//     if(ptr->top == -1){
//             return 1;
//         }
//         else{
//             return 0;
//         }
// }
 
// int isFull(struct stack* ptr){
//     if(ptr->top == ptr->size - 1){
//         return 1;
//     }
//     else{
//         return 0;
//     }
// }
 
// void push(struct stack* ptr, int val){
//     if(isFull(ptr)){
//         printf("\nStack Overflow! Cannot push %d to stack %d\n", val, ptr->num);
//     }
//     else{
//         ptr->top++;
//         ptr->arr[ptr->top] = val;
//     }
// }
 
// int pop(struct stack* ptr){
//     if(isEmpty(ptr)){
//         printf("\nStack Underflow! Cannot pop from stack %d\n", ptr->num);
//         return -1;
//     }
//     else{
//         int val = ptr->arr[ptr->top];
//         ptr->top--;
//         return val;
//     }
// }

// int Peek(struct stack *s, int i){
//     int cal = s->top - i + 1;
//     if(cal<0){
//         printf("\nNot a valid Position for Stack %d", s->num);
//     }
//     else{
//         return s->arr[cal];
//     }
// }

// void show(struct stack *sp){
//     int counter = sp->top;
//     printf("\nElement in Stack %d : ", sp->num);
//     while(counter!=-1){
//         printf("%d ", sp->arr[counter]);
//         counter--;
//     }
// }
 
// int main(){
//     //Stack 1
//     struct stack *sp1 = (struct stack *) malloc(sizeof(struct stack));
//     sp1->size = 100;
//     sp1->top = -1;
//     sp1->num = 1;
//     sp1->arr = (int *) malloc(sp1->size * sizeof(int));
//     // printf("Stack has been created successfully\n");

//     //Stack 2
//     struct stack *sp2 = (struct stack *) malloc(sizeof(struct stack));
//     sp2->size = 100;
//     sp2->top = -1;
//     sp2->num = 2;
//     sp2->arr = (int *) malloc(sp2->size * sizeof(int));
//     // printf("Stack has been created successfully\n");
//     int c;
//     int a, j;

//     while(c!=9){
//         printf("\nChoose:\n1. Push (in Stack 1)\t2. Push (in Stack 2)\n3. Pop (in Stack 1)\t4. Pop (in Stack 2)\n5. Peek (in Stack 1)\t6. Peek (in Stack 2)\n7. Show (in Stack 1)\t8. Show (in Stack 2)\n9. Exit\nEnter Choice: ");
//         scanf("%d", &c);
//         switch(c){
//             case 1: 
//                 printf("\nEnter element to push in stack 1: ");
//                 scanf("%d", &a);
//                 push(sp1, a);
//                 break;
//             case 2: 
//                 printf("\nEnter element to push in stack 2: ");
//                 scanf("%d", &a);
//                 push(sp2, a);
//                 break;
//             case 3: 
//                 printf("\nPopped element from stack 1: %d\n", pop(sp1));
//                 break;
//             case 4: 
//                 printf("\nPopped element from stack 2: %d\n", pop(sp2));
//                 break;
//             case 5: 
//                 printf("\nEnter Index: ");
//                 scanf("%d", &j);
//                 printf("\nStack 1: Element at %d position is %d\n", j, Peek(sp1, j));
//                 break;
//             case 6: 
//                 printf("\nEnter Index: ");
//                 scanf("%d", &j);
//                 printf("\nStack 2: Element at %d position is %d\n", j, Peek(sp2, j));
//                 break;
//             case 7: 
//                 show(sp1);
//                 break;
//             case 8: 
//                 show(sp2);
//                 break;
//             case 9: 
//                 break;
//         };
//     }
//     return 0;
// }