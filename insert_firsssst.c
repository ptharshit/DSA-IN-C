// #include <stdio.h>
// #include <stdlib.h>
// struct node
// {
//     struct node *next;
//     int data;
// };
// void traversal(struct node *ptr)
// {
//     while (ptr != NULL)
//     {
//         printf("%d\n", ptr->data);
//         ptr = ptr->next;
//     }
// }

// struct node *insertatfirst(struct node *start, int data)
// {
//     struct node *ptr = (struct node *)malloc(sizeof(struct node));
//     ptr->data = data;
//     ptr->next = start;
//     return ptr;
// }
// struct node *insertatindex(struct node *start, int data, int index)
// {
//     struct node *ptr = (struct node *)malloc(sizeof(struct node));
//     struct node *p = start;
//     int i = 0;
//     while (i != index - 2)
//     {
//         p = p->next;
//         i++;
//     }
//     ptr->data = data;
//     ptr->next = p->next;
//     p->next = ptr;
//     return start;
// }
// struct node *insertatend(struct node *start, int data)
// {
//     struct node *ptr = (struct node *)malloc(sizeof(struct node));
//     struct node *p = start;
//     while (p->next != NULL)
//     {
//         p = p->next;
//     }
//     ptr->data = data;
//     p->next = ptr;
//     ptr->next = NULL;
//     return start;
// }
// struct node *insertafternode(struct node *start, struct node *prevnode, int data)
// {
//     struct node *ptr = (struct node *)malloc(sizeof(struct node));
//     ptr->data = data;
//     ptr->next = prevnode->next;
//     prevnode->next = ptr;
//     return start;
// }

// int main()
// {
//     // struct node* start;
//     // struct node* first;
//     // struct node* second;
//     // struct node* third;

//     struct node *start = (struct node *)malloc(sizeof(struct node));
//     struct node *first = (struct node *)malloc(sizeof(struct node));
//     struct node *second = (struct node *)malloc(sizeof(struct node));
//     struct node *third = (struct node *)malloc(sizeof(struct node));

//     start->data = 45;
//     start->next = first;

//     first->data = 50;
//     first->next = second;

//     second->data = 5;
//     second->next = third;

//     third->data = 500;
//     third->next = NULL;

//     traversal(start);
//     start = insertafternode(start, second, 98);
//     printf("\n");
//     traversal(start);

//     return 0;
// }

#include <stdio.h>
#include <stdlib.h>
struct node{
    int data;
    struct node* next;
};
int scandata(struct node* ptr,int n){
    for (int i = 0; i < n; i++)
    {
        printf("enter the data for nodes______\n");
        scanf("%d",&ptr->data);
        ptr=ptr->next;
    }
    return ptr->data;
}
void traversal(struct node* ptr){
    while (ptr!=NULL){
        printf("%d\t",ptr->data);
        ptr=ptr->next;
    }
}

int main()
{
    int maxindex;
    scanf("%d",&maxindex);
    struct node* head=(struct node*) malloc (sizeof(struct node));
    struct node* second=(struct node*) malloc (sizeof(struct node));
    struct node* third=(struct node*) malloc (sizeof(struct node));

    scandata(head,maxindex);
    head->next=second;
    second->next=third;
    third->next=NULL;
    traversal(head);
    return 0;
}