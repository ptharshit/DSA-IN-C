// some mistakes occur in this code so try again after some time get rest
#include <stdio.h>
#include <stdlib.h>
struct node
{
    int data;
    struct node *prev;
    struct node *next;
};
void create(struct node* ptr){
    int a;
    struct node* p= ptr;
    ptr->prev=NULL;
    do
    {
        printf("enter the data - ");
        scanf("%d",&ptr->data);
        printf("want to continue___type 1--: ");
        scanf("%d",&a);
        if (a==1)
        {
            ptr->next=(struct node*)malloc(sizeof(struct node));
            ptr=ptr->next;
            ptr->prev=p;
            p=p->next;
        }
        else
        {
            ptr->next=NULL;
        }
        
        
    } while (a==1);
    
}
void traversal(struct node *head)
{
    struct node *ptr = head;
    do
    {
        printf("\nelement is %d\n", ptr->data);
        ptr = ptr->next;
    } while (ptr != NULL);
}
struct node* insertAtBegin(struct node* head){
    struct node* ptr=(struct node*) malloc (sizeof(struct node));
    printf("enter the data for new node - ");
    scanf("%d",&ptr->data);
    ptr->prev=NULL;
    ptr->next=head;
    head->prev=ptr;
    return ptr;
}
struct node* insertAtEnd(struct node* head){
    struct node* ptr=(struct node*) malloc (sizeof(struct node));
    printf("enter the data for new node - ");
    scanf("%d",&ptr->data);
    struct node* p=head;
    while (p->next!=NULL){
        p=p->next;
    }
    ptr->next=NULL;
    p->next=ptr;
    
    return head;
}
struct node* insertAtBetween(struct node* head){
    int index;
    printf("enter the index where u want to insert - ");
    scanf("%d",&index);
    struct node* ptr=(struct node*) malloc (sizeof(struct node));
    struct node* p=head;
    int i=0;
    while(i!=index-2){
        p=p->next;
        i++;
    }
    ptr->next=p->next;
    printf("enter the data for new node - ");
    scanf("%d",&ptr->data);
    ptr->prev=p;
    p->next=ptr;
    return head;
}
struct node* deletionFromFirst(struct node* head){
    struct node* p = head;
    head=head->next;
    head->prev=NULL;
    free(p);
    return head;
}
struct node* deletionFromIndex(struct node* head){
    int index;
    printf("enter the index where u want to delete data - ");
    scanf("%d",&index);
    struct node* p = head;
    struct node* q= head->next;
    int i = 0;
    while(i!=index-2){
        p=p->next;
        q=q->next;
        i++;
    }
    p->next=q->next;
    q->next->prev=q->prev;
    free(q);
    return head;
}
struct node* deletionFromEnd(struct node* head){
    struct node* p = head;
    struct node* q = head->next;
    while(q->next!=NULL){
        p=p->next;
        q=q->next;
    }
    p->next=NULL;
    free(q);
    return head;
}
int main()
{
    struct node *head = (struct node *)malloc(sizeof(struct node));
    // struct node *second = (struct node *)malloc(sizeof(struct node));
    // struct node *third = (struct node *)malloc(sizeof(struct node));
    // struct node *fourth = (struct node *)malloc(sizeof(struct node));
    // struct node *fifth = (struct node *)malloc(sizeof(struct node));

    // head->prev = NULL;
    // head->data = 10;
    // head->next = second;

    // second->prev = head;
    // second->data = 20;
    // second->next = third;

    // third->prev = second;
    // third->data = 30;
    // third->next = fourth;

    // fourth->prev = third;
    // fourth->data = 40;
    // fourth->next = fifth;

    // fifth->prev = fourth;
    // fifth->data = 50;
    // fifth->next = NULL;
    create(head);
    traversal(head);
    printf("choose the operation--\n");
    printf("1 - insert at front\n");
    printf("2 - insert at index\n");
    printf("3 - insert at end\n");
    printf("4 - deletion from front\n");
    printf("5 - deletion from index\n");
    printf("6 - deletion from end\n");
    printf("enter the choice - ");
    int choice;
    scanf("%d",&choice);
    switch (choice)
    {
    case 1:
        head = insertAtBegin(head);
        break;
    case 2:
        head = insertAtBetween(head);
        break;
    case 3:
        head = insertAtEnd(head);
        break;
    case 4:
        head = deletionFromFirst(head);
        break;
    case 5:
        head = deletionFromIndex(head);
        break;
    case 6:
        head = deletionFromEnd(head);
        break;
    
    default:
        printf("enter the right choice---\n");
        break;
    }
    int a;
    printf("IF you want to display the data, type 1 - ");
    scanf("%d",&a);
    if (a==1)
    {
        traversal(head);
    }
    // head= insertAtBegin(head,999);
    // // head= insertAtBetween(head,999,5);
    // // head= insertAtEnd(head,999);
    // printf("\n");
    // traversal(head);
    return 0;
}