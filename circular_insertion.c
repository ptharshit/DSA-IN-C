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
struct node* insertAtBegin(struct node* head,int data){
    struct node* ptr=(struct node*) malloc (sizeof(struct node));
    struct node* p=head;
    ptr->data=data;
    ptr->next=head;
    do
    {
        p=p->next;
    } while (p->next!=head);
    p->next=ptr;
    return ptr;
}
struct node* insertAtBetween(struct node* head,int data,int index){
    struct node* ptr=(struct node*) malloc (sizeof(struct node));
    struct node* p=head;
    ptr->data=data;
    int i=0;
    while (i!=index-2){
        p=p->next;
        i++;
    }
    ptr->next=p->next;
    p->next=ptr;
    return head;
}
struct node* insertAtEnd(struct node* head,int data){
    struct node* ptr=(struct node*) malloc (sizeof(struct node));
    struct node* p=head;
    ptr->data=data;
    do
    {
        p=p->next;
    } while (p->next!=head);
    p->next=ptr;
    ptr->next=head;
    return head;
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
    // start=insertAtBegin(start,999);
    // start=insertAtBetween(start,999,3);
    start=insertAtEnd(start,999);
    printf("\n");
    traversal(start);

    return 0;
}