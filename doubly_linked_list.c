#include <stdio.h>
#include <stdlib.h>
struct node{
    int data;
    struct node* prev;
    struct node* next;
};
void traversal(struct node* head){
    struct node* ptr=head;
    do
    {
        printf("element is %d\n",ptr->data);
        ptr=ptr->next;
    } while (ptr!=head);
    
}
int main()
{
    struct node* head=(struct node*) malloc (sizeof(struct node));
    struct node* second=(struct node*) malloc (sizeof(struct node));
    struct node* third=(struct node*) malloc (sizeof(struct node));
    struct node* fourth=(struct node*) malloc (sizeof(struct node));
    struct node* fifth=(struct node*) malloc (sizeof(struct node));

    head->prev=fifth;
    head->data=10;
    head->next=second;

    
    second->prev=head;
    second->data=20;
    second->next=third;

    third->prev=second;
    third->data=30;
    third->next=fourth;

    fourth->prev=third;
    fourth->data=40;
    fourth->next=fifth;

    fifth->prev=fourth;
    fifth->data=50;
    fifth->next=head;

    traversal(head);
    return 0;
}