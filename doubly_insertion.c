// some mistakes occur in this code so try again after some time get rest
#include <stdio.h>
#include <stdlib.h>
struct node
{
    int data;
    struct node *prev;
    struct node *next;
};
void traversal(struct node *head)
{
    struct node *ptr = head;
    do
    {
        printf("element is %d\n", ptr->data);
        ptr = ptr->next;
    } while (ptr != NULL);
}
struct node* insertAtBegin(struct node* head,int data){
    struct node* ptr=(struct node*) malloc (sizeof(struct node));
    ptr->data=data;
    ptr->prev=NULL;
    ptr->next=head;
    // head->prev=ptr;
    return ptr;
}
struct node* insertAtEnd(struct node* head,int data){
    struct node* ptr=(struct node*) malloc (sizeof(struct node));
    ptr->data=data;
    struct node* p=head;
    while (p->next!=NULL){
        p=p->next;
    }
    ptr->next=NULL;
    p->next=ptr;
    
    return head;
}
struct node* insertAtBetween(struct node* head,int data,int index){
    struct node* ptr=(struct node*) malloc (sizeof(struct node));
    struct node* p=head;
    int i=0;
    while(i!=index-2){
        p=p->next;
        i++;
    }
    ptr->next=p->next;
    ptr->data=data;
    ptr->prev=p;
    p->next=ptr;
    return head;
}
int main()
{
    struct node *head = (struct node *)malloc(sizeof(struct node));
    struct node *second = (struct node *)malloc(sizeof(struct node));
    struct node *third = (struct node *)malloc(sizeof(struct node));
    struct node *fourth = (struct node *)malloc(sizeof(struct node));
    struct node *fifth = (struct node *)malloc(sizeof(struct node));

    head->prev = NULL;
    head->data = 10;
    head->next = second;

    second->prev = head;
    second->data = 20;
    second->next = third;

    third->prev = second;
    third->data = 30;
    third->next = fourth;

    fourth->prev = third;
    fourth->data = 40;
    fourth->next = fifth;

    fifth->prev = fourth;
    fifth->data = 50;
    fifth->next = NULL;

    traversal(head);
    head= insertAtBegin(head,999);
    // head= insertAtBetween(head,999,5);
    // head= insertAtEnd(head,999);
    printf("\n");
    traversal(head);
    return 0;
}