#include <stdio.h>
#include <stdlib.h>
struct node{
    int data;
    struct node* next;
};*top=NULL;
typedef struct node node;
void push(){
    node* ptr=(node*)malloc(sizeof(node));
    
    if (top==NULL)
    {
        // printf("stack is empty.\n");
        ptr->next=NULL;
    }
    else
    {
        ptr->next=top;
    }
    printf("enter the data - ");
    scanf("%d",&ptr->data);
    top=ptr;
    
}
void pop(){
    node* p=top;
    top=p->next;
    free(p);
}
void traverse(){
    node* p=top;
    while(p!=NULL){
        printf("%d\t",p->data);
        p=p->next;
    }
    
}
int main()
{
    int a,c;
    while(1)
    {
        printf("\n1 - for push\n");
        printf("2 - for pop\n");
        printf("3 - for traverse\n 4-for exit.\n");
        printf("enter the choice - ");
        scanf("%d",&a);
        switch (a)
        {
        case 1:
            push();
            break;
        case 2:
            pop();
            break;
        case 3:
            traverse();
            break;
        case 4:
            exit(0);
        default:
            printf("enter the right choice....");
            break;
        }
    }
    return 0;
} 