#include <stdio.h>
int queue[5];
int front=0;
int rear=-1;
void enqueue(){
    if (front==-1 && rear==-1)
    {
        front++;
        rear++;
    }
    if (rear>3)
    {
        printf("queue is full.\n");
    }
    
    else
    {
        rear++;
    }
    printf("enter the data - ");
    scanf("%d",&queue[rear]);
    
}
void dequeue(){
    
}
void traverse(){
    for(int i=front; i<=rear; i++)
    {
        printf("%d",queue[i]);
        printf("\n");
    }
}
int main()
{
    enqueue();
    enqueue();
    enqueue();
    enqueue();
    enqueue();
    enqueue();
    enqueue();
    traverse();
    return 0;
}