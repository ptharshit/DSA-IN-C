#include <stdio.h>
#include <stdlib.h>
struct node{
    int data;
    struct node* next;
};
void traversal(struct node* ptr){
    while(ptr!=NULL){
        printf("%d\n",ptr->data);
        ptr=ptr->next;
    }
}
void traversall(struct node* ptr,struct node* nodd){
    while (ptr!=nodd)
    {
        ptr=ptr->next;
        if(ptr==nodd){
        printf("\n%d\n",nodd->data);}
    }
    
}
int main()
{
    struct node* start;    
    struct node* first;    
    struct node* second;    
    struct node* third;       

    start=(struct node*)malloc(sizeof(struct node));
    first=(struct node*)malloc(sizeof(struct node));
    second=(struct node*)malloc(sizeof(struct node));
    third=(struct node*)malloc(sizeof(struct node));

    start->data=10;
    start->next=first;

    first->data=20;
    first->next=second;

    second->data=30;
    second->next=third;

    third->data=40;
    third->next=NULL;

    traversal(start);
    traversall(start,second);
    return 0;
}