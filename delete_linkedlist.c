#include <stdio.h>
#include <stdlib.h>
struct node{
    int data;
    struct node* next;
};
void traversal(struct node* start){
    while(start!=NULL){
        printf("%d\t",start->data);
        start=start->next;
    }
}
struct node* deletionAtFirst(struct node* head){
    struct node* ptr=head;
    head=head->next;
    free(ptr);
    return head;
}
struct node* deletionAtIndex(struct node* head,int index){
    struct node* ptr=head;
    struct node* q=head->next;
    int i=0;
    while (i!=index-2){
        ptr=ptr->next;
        q=q->next;
        i++;
    }
    // ptr->next=ptr->next->next;
    ptr->next=q->next;
    free(q);
    return head;
}
struct node* deletionAtValue(struct node* head,int value){
    struct node* ptr=head;
    struct node* q=head->next;
    while (q->data!=value && q->next!=NULL){
        ptr=ptr->next;
        q=q->next;
    }
    if (q->data==value)
    {
        ptr->next=q->next;
        free(q);
    }
    return head;
}
struct node* deletionAtEnd(struct node* head){
    struct node* ptr=head;
    struct node* q=head->next;
    while ( q->next!=NULL){
        q=q->next;
        ptr=ptr->next;
    }
    ptr->next=NULL;
    free(q);
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
    fourth->next=NULL;

    traversal(start);
    // start=deletionAtFirst(start);
    // start=deletionAtIndex(start,2);
    // start=deletionAtEnd(start);
    start=deletionAtValue(start,20);
    printf("\n");
    traversal(start);

    return 0;
}