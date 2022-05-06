#include <stdio.h>
#include <stdlib.h>
struct node
{
    int num;
    struct node *ptr;
};
typedef struct node NODE;
NODE *start;
NODE *next;
start=(NODE*)malloc(sizeof(NODE));
void insertbegin(int item)
{
    NODE *ptr;
    ptr=(NODE*)malloc(sizeof(NODE));
    ptr->num=item;
    if (start==NULL)
    {
        ptr->next=NULL;
    }
    else
    {
        ptr->next=start;
        start=ptr;
    }
    
}
int main()
{
    int item;
    printf("enter the item: ");
    scanf("%d",&item);
    insertbegin(item);
    return 0;
}
