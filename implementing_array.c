#include <stdio.h>
#include <stdlib.h>

struct implementing_array
{
    int total_size;
    int used_size;
    int* ptr;
};
void createarray(struct implementing_array* a,int tSize,int uSize)
{
    a->total_size=tSize;
    a->used_size=uSize;
    a->ptr=(int*)malloc(tSize* sizeof(int));
}
void scan(struct implementing_array * a)
{
    int n;
    for (int i = 0; i < a->used_size; i++)
    {
        printf("enter the %d element - ",i);
        scanf("%d",&n);
        (a->ptr)[i]=n;
    }
    
}
void print(struct implementing_array *a)
{
    for (int i = 0; i < a->used_size; i++)
    {
        printf("%d\n",(a->ptr)[i]);
    }
    
}
int main()
{
    struct implementing_array age;
    createarray(&age,10,3);
    scan(&age);
    print(&age);
    return 0;
}