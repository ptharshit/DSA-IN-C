#include <stdio.h>
#include <stdlib.h>
struct stack
{
    int size;
    int top;
    int *arr;
};
int isempty(struct stack *ptr)
{
    if (ptr->top == -1)
    {
        printf("stack is empty.\n");
        return 1;
    }
    else
        printf("stack is not empty.\n");
    return 0;
}
int isfull(struct stack *ptr)
{
    if (ptr->top == ptr->size - 1)
    {
        printf("stack is full.\n");
        return 1;
    }
    else
        printf("stack is not full.\n");
    return 0;
}
void push(struct stack *ptr, int val)
{
    if (isfull(ptr))
    {
        printf("stack is overflow! %d is not pushing to the stack.", val);
    }
    else
    {
        ptr->top++;
        ptr->arr[ptr->top] = val;
        printf("%d succesfully pushed into the stack.\n", val);
    }
}
void pop(struct stack *ptr)
{
    if (isempty(ptr))
    {
        printf("stack is underflow! cannot pop from stack.\n");
    }
    else
    {
        int val = ptr->arr[ptr->top];
        ptr->top--;
        printf("%d is pop from the stack.\n", val);
    }
}
int peek(struct stack *ptr, int i)
{
    if (ptr->top - i + 1 < 0)
    {
        printf("it is invalid......\n");
        return -1;
    }
    else
    {
        return ptr->arr[ptr->top - i + 1];
    }
}
void traversal(struct stack *ptr)
{
    while (ptr->top != -1)
    {
        printf("%d\t", ptr->arr[ptr->top]);
        ptr->top--;
    }
}
int main()
{
    struct stack *s;
    s->size = 5;
    s->top = -1;
    // it is an empty stack
    s->arr = (int *)malloc(s->size * sizeof(int));
    // // push an element to check emptiness
    // s->arr[0]=99;
    // s->top++;

    push(s, 39);
    push(s, 989);
    push(s, 659);
    push(s, 69);
    push(s, 5);
    push(s, 8475);
    pop(s);
    pop(s);
    traversal(s);
    isempty(s);
    isfull(s);
    for (int j = 1; j <= s->top  + 1; j++)
    {
        printf("element at position %d is %d", j, peek(s, j));
    }

    return 0;
}