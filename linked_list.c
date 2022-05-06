#include <stdio.h>
#include <stdlib.h>
struct node {
    int data;
    struct node * next;
};
void traversel(struct node *ptr){
    while(ptr!=NULL){
        printf("element: %d\n",ptr->data);
        ptr=ptr->next;
    }
}
void insertAtEnd(struct node * start,int data){
    struct node * temp = start;
    while (temp->next!=NULL)
    {
        temp = temp -> next;
    }
    struct node* ptr;
    temp -> next = ptr;
    ptr->data = data;
    ptr ->next = NULL;
    
}
int main()
{
    struct node *start;
    struct node *first;
    struct node *second;
    struct node *third;

    start=(struct node*)malloc(sizeof(struct node));
    first=(struct node*)malloc(sizeof(struct node));
    second=(struct node*)malloc(sizeof(struct node));
    third=(struct node*)malloc(sizeof(struct node));

    start->data=8;
    start->next=first;

    first->data=4;
    first->next=second;

    second->data=39;
    second->next=third;

    third->data=88;
    third->next=NULL;

    insertAtEnd(start,999);
    traversel(start);
    return 0;
}

