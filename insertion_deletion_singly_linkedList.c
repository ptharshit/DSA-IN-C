#include <stdio.h>
#include <stdlib.h>
struct node
{
    struct node *next;
    int data;
};
void create(struct node* ptr){
    int a;
    do
    {
        printf("enter the data : ");
        scanf("%d",&ptr->data);
        printf("do you want to continue--"
                "if yes, type 1 = ");
        scanf("%d",&a);
        if (a==1)
        {
            ptr->next=(struct node*)malloc(sizeof(struct node));
            ptr=ptr->next;   
        }
        else
        {
            ptr->next=NULL;
        }
        
        
    } while (a==1);
    
}
void traversal(struct node *ptr)
{
    printf("it is your list of data - ");
    while (ptr != NULL)
    {
        printf("%d\t", ptr->data);
        ptr = ptr->next;
    }
}

struct node *insertatfirst(struct node *start)
{
    struct node *ptr = (struct node *)malloc(sizeof(struct node));
    printf("enter the data for new node- ");
    scanf("%d",&ptr->data);
    ptr->next = start;
    return ptr;
}
struct node *insertatindex(struct node *start)
{
    int index;
    printf("enter the index where you want to insert- ");
    scanf("%d",&index);
    struct node *ptr = (struct node *)malloc(sizeof(struct node));
    struct node *p = start;
    int i = 0;
    while (i != index - 2)
    {
        p = p->next;
        i++;
    }
    printf("enter the data for new node- ");
    scanf("%d",&ptr->data);
    ptr->next = p->next;
    p->next = ptr;
    return start;
}
struct node *insertatend(struct node *start)
{
    struct node *ptr = (struct node *)malloc(sizeof(struct node));
    struct node *p = start;
    while (p->next != NULL)
    {
        p = p->next;
    }
    printf("enter the data for new node- ");
    scanf("%d",&ptr->data);
    p->next = ptr;
    ptr->next = NULL;
    return start;
}
struct node* deletionAtFirst(struct node* head){
    struct node* ptr=head;
    head=head->next;
    free(ptr);
    return head;
}
struct node* deletionAtIndex(struct node* head){
    int index;
    printf("enter the index where you want to delete a node - ");
    scanf("%d",&index);
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
    // struct node* start;
    // struct node* first;
    // struct node* second;
    // struct node* third;
    int choice,a;
    struct node *start = (struct node *)malloc(sizeof(struct node));
    // struct node *first = (struct node *)malloc(sizeof(struct node));
    // struct node *second = (struct node *)malloc(sizeof(struct node));
    // struct node *third = (struct node *)malloc(sizeof(struct node));

    // start->data = 45;
    // start->next = first;

    // first->data = 50;
    // first->next = second;

    // second->data = 5;
    // second->next = third;

    // third->data = 500;
    // third->next = NULL;

    create(start);
    traversal(start);
    printf("\n1 - insert at first\n");
    printf("2 - insert at index\n");
    printf("3 - insert at end\n");
    printf("4 - delete from first\n");
    printf("5 - delete from index\n");
    printf("6 - delete from end\n");
    printf("enter your choice from above.... ");
    scanf("%d",&choice);
    switch (choice)
    {
    case 1:
        start=insertatfirst(start);
        break;
    case 2:
        start=insertatindex(start);
        break;
    case 3:
        start=insertatend(start);
        break;
    case 4:
        start=deletionAtFirst(start);
        break;
    case 5:
        start=deletionAtIndex(start);
        break;
    case 6:
        start=deletionAtEnd(start);
        break;
    
    default:
        printf("please enter the right choice...\n");
        break;

    }
    // start = insertafternode(start, second, 98);
    // printf("\n");
    // traversal(start);
    printf("IF you want to display the data, type 1 - ");
    scanf("%d",&a);
    if (a==1)
    {
        traversal(start);
    }
    

    return 0;
}