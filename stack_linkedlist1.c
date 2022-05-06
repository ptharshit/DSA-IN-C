#include <stdio.h>
#include <stdlib.h>
struct stack
{
    int data;
    struct stack *next;
};* top = NULL;
typedef struct stack node;
void push()
{
    node *ptr = (node *)malloc(sizeof(node));
    if (top == NULL)
    {
        ptr->next = NULL;
    }
    else
    {
        ptr->next = top;
    }

    printf("enter the data - ");
    scanf("%d", &ptr->data);
    top = ptr;
}
void pop(){
    node* p = top;
    top=p->next;
    free(p);
}
void traverse(){
    node* p= top;
    while (p!=NULL)
    {
        printf("%d\t",p->data);
        p=p->next;
    }
    
    
}
int main()
{
    int choice,a=1;
    printf("______choose the choice______\n1. push\n2. pop\n3. traverse\n4. exit\n");
    while (a==1){
        printf("\nenter the choice - ");
        scanf("%d",&choice);
        switch (choice)
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
            printf("please enter the right choice..\n");
            break;
        }
    }
    return 0;
}