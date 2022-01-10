#include<stdio.h>
#include<stdlib.h>
typedef struct{
    int len;
}Array;

int main()
{
    Array *ptr;
    ptr->len=20;
    printf("%d",ptr->len);
    return 0;
}