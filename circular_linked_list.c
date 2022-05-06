#include <stdio.h>
#include <stdlib.h>
struct node{
    int data;
    struct node* next;
};
void traversal(struct node* start){
    struct node* ptr=start;
    do
    {
        printf("element is %d\n",ptr->data);
        ptr=ptr->next;
    } while (ptr!=start);
    
}
int main()
{
    struct node* start=(struct node*) malloc (sizeof(struct node));
    struct node* first=(struct node*) malloc (sizeof(struct node));
    struct node* second=(struct node*) malloc (sizeof(struct node));
    struct node* third=(struct node*) malloc (sizeof(struct node));
    struct node* fourth=(struct node*) malloc (sizeof(struct node));

    start->data=10;
    start->next=first;

    first->data=20;
    first->next=second;

    second->data=30;
    second->next=third;

    third->data=40;
    third->next=fourth;

    fourth->data=50;
    fourth->next=start;

    traversal(start);

    return 0;
}