#include <stdio.h>
#include <stdlib.h>
struct node {
    int data;
    struct node *next;
};
void traversal(struct node *ptr){
    while (ptr!=NULL)
    {
        printf("%d\n",ptr->data);
        ptr=ptr->next;
    }
    
}
struct node * insert(struct node * start,int data){
    struct node* ptr=(struct node*)malloc (sizeof(struct node));
    ptr->data=data;
    ptr->next=start;
    return ptr;
}
int main()
{
    struct node * start;
    struct node * first;
    struct node * second;

    start=(struct node*)malloc(sizeof(struct node));
    first=(struct node*)malloc(sizeof(struct node));
    second=(struct node*)malloc(sizeof(struct node));

    start->data=10;
    start->next=first;

    first->data=20;
    first->next=second;

    second->data=30;
    second->next=NULL;

    traversal(start);
    start=insert(start,99);
    printf("\n");
    traversal(start);
    return 0;
}