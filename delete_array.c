#include <stdio.h>
int main()
{
    int n,arr[10],pos,ele;
    printf("enter the size of array - ");
    scanf("%d",&n);
    printf("----now enter the elements in array----\n");
    for (int i = 0; i < n; i++)
    {
        printf("enter at %d position - ",i+1);
        scanf("%d",&arr[i]);
    }
    printf("array= [");
    for (int i = 0; i < n; i++)
    {
        printf(" %d ",arr[i]);
    }
    printf("]");
    printf("\nenter the deletion position - ");
    scanf("%d",&pos);
    for (int i = pos-1; i < n ; i++)
    {
        arr[i]=arr[i+1];
    }
    n--;
    printf("array= [");
    for (int i = 0; i < n; i++)
    {
        printf(" %d ",arr[i]);
    }
    printf("]");
    return 0;
}