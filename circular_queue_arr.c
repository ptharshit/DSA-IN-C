#include <stdio.h>
#include <stdlib.h>
int front=-1;
int rear=-1;
int queue[10];
int n;
void enequeue(){
    if (front==-1 && rear==-1)
    {
        front++;
        rear++;
        printf("enter the data - ");
        scanf("%d",&queue[rear]);
    } 
    else if ((rear+1)%n==front)
    {
        printf("queue is full...\n");
    }
    
    else
    {
        // rear++;
        rear=(rear+1)%n;
        printf("enter the data - ");
        scanf("%d",&queue[rear]);
    }
}
void dequeue(){
    if (front==-1)
    {
        printf("queue is empty...\n");
    }
    else
    {
        front=(front+1)%n;
    }
}
// error in traversing......
void traverse(){
    for (int i = front; i <= rear; i++)
    {
        printf("%d\t",queue[i]);
    }
    
}
int main()
{
    int a=1,choice;
    printf("enter the size of queue - ");
    scanf("%d",&n);
    printf("______choose the choice______\n1. inserting\n2. deleting\n3. traverse\n4. exit\n");
    while (a==1){
        printf("\nenter the choice - ");
        scanf("%d",&choice);
        switch (choice)
        {
        case 1:
            enequeue();
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