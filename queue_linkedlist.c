#include <stdio.h>
#include <stdlib.h>
struct node{
    int data;
    struct node* next;
};
typedef struct node node;
node* front=NULL;
node* rear=NULL;

void enqueue(){
    node* ptr=(node*)malloc(sizeof(node));
    if (ptr==NULL)
    {
        printf("queue is full...\n");
    }
    else
    {
        printf("enter the data - ");
        scanf("%d",&ptr->data);
        ptr->next=NULL;
        if (front==NULL)
        {
            front=rear=ptr;
        }
        else
        {
            rear->next=ptr;
            rear=ptr;
        }
    }
}
void dequeue(){
    node* p=front;
    if (front==NULL)
    {
        printf("queue is empty..\n");
    }
    else
    {
        front=front->next;
        free(p);
    }
}
void traverse(){
    node* ptr=front;
    while (ptr!=NULL)
    {
        printf("%d\t",ptr->data);
        ptr=ptr->next;
    }
    
}
int main()
{
    int choice,a=1;
    printf("______choose the choice______\n1. insert\n2. delete\n3. traverse\n4. exit\n");
    while (a==1){
        printf("\nenter the choice - ");
        scanf("%d",&choice);
        switch (choice)
        {
        case 1:
            enqueue();
            break;
        case 2:
            dequeue();
            break;
        case 3:
            traverse();
            break;
        case 4:
            exit(0);
        
        default:
            printf("please enter the right choice..\n");
            break;
        }
    }
    return 0;
}