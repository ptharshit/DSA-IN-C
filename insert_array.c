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
    printf("\nenter the inserting position - ");
    scanf("%d",&pos);
    printf("enter the inserting element - ");
    scanf("%d",&ele);
    n++;
    for (int i = n-1; i >= pos ; i--)
    {
        arr[i]=arr[i-1];
    }
    arr[pos-1]=ele;
    printf("\n array= [");
    for (int i = 0; i < n; i++)
    {
        printf(" %d ",arr[i]);
    }
    printf("]");
    return 0;
}