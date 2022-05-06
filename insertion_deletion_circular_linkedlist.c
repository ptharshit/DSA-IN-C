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
void create(struct node* ptr){
    int a;
    struct node* p=ptr;
    do
    {
        printf("enter the data : ");
        scanf("%d",&ptr->data);
        printf("if you want to continue, type 1 : ");
        scanf("%d",&a);
        if (a==1)
        {
            ptr->next=(struct node*)malloc(sizeof(struct node));
            ptr=ptr->next;
        }
        else
        {
            ptr->next=p;
        }
        
        } while (a==1);
    
}
struct node* insertAtBegin(struct node* head){
    struct node* ptr=(struct node*) malloc (sizeof(struct node));
    struct node* p=head;
    printf("enter the data for new node : ");
    scanf("%d",&ptr->data);
    ptr->next=head;
    do
    {
        p=p->next;
    } while (p->next!=head);
    p->next=ptr;
    return ptr;
}
struct node* insertAtIndex(struct node* head){
    int index;
    printf("enter the index where you want to insert : ");
    scanf("%d",&index);
    struct node* ptr=(struct node*) malloc (sizeof(struct node));
    struct node* p=head;
    printf("enter the data for new node : ");
    scanf("%d",&ptr->data);
    int i=0;
    while (i!=index-2){
        p=p->next;
        i++;
    }
    ptr->next=p->next;
    p->next=ptr;
    return head;
}
struct node* insertAtEnd(struct node* head){
    struct node* ptr=(struct node*) malloc (sizeof(struct node));
    struct node* p=head;
    printf("enter the data for new node : ");
    scanf("%d",&ptr->data);
    do
    {
        p=p->next;
    } while (p->next!=head);
    p->next=ptr;
    ptr->next=head;
    return head;
}
struct node* deleteAtBegin(struct node* head){
    struct node* q=head;
    struct node* p=head;
    while (p->next!=head){
        p=p->next;
    }
    head=head->next;
    p->next=head;
    free(q);
    return head;
}
struct node* deleteAtIndex(struct node* head){
    int i=0,index;
    printf("enter the index where u want to delete : ");
    scanf("%d",&index);
    struct node* p=head;
    struct node* q=head->next;
    while (i!=index-2){
        p=p->next;
        q=q->next;
    }
    p->next=q->next;
    free(q);
    return head;
}
struct node* deleteAtEnd(struct node* head){
    struct node* p=head;
    struct node* q=head->next;
    while(q->next!=head){
        p=p->next;
        q=q->next;
    }
    p->next=q->next;
    free(q);
    return head;

}
int main()
{
    struct node* head=(struct node*)malloc(sizeof(struct node));
    create(head);
    traversal(head);
    printf("1 - insert at begin\n");
    printf("2 - insert at index\n");
    printf("3 - insert at end\n");
    printf("4 - delete from begin\n");
    printf("5 - delete from index\n");
    printf("6 - delete from end\n");
    printf("enter your choice : ");
    int choice;
    scanf("%d",&choice);
    switch (choice)
    {
    case 1:
        head= insertAtBegin(head);
        break;
    case 2:
        head= insertAtIndex(head);
        break;
    case 3:
        head= insertAtEnd(head);
        break;
    case 4:
        head = deleteAtBegin(head);
        break;
    case 5:
        head = deleteAtIndex(head);
        break;
    case 6:
        head = deleteAtEnd(head);
        break;
    
    default:
        printf("\nenter the right choice....");
        break;
    }
    int b;
    printf("you want to traverse type 1 : ");
    scanf("%d",&b);
    if (b==1)
    {
        traversal(head);
    }
    
}