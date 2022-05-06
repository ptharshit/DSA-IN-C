#include <stdio.h>
int top=-1;
int stack[10],n,choice,a=1;
void push(){
    if (top==n-1)
    {
        printf("stack is full...\n");
    }
    else
    {
        top++;
        printf("Enter the element to be inserted - ");
        scanf("%d",&stack[top]);
    }
    
}
void pop(){
    if (top==-1)
    {
        printf("stack is empty..\n");   
    }
    else
    {
        top--;
    }
    
}
void traversal(){
    if (top==-1)
    {
        printf("stack is empty..\n");
    }
    else
    {
        for (int i = top; i > -1; i--)
        {
            printf("%d\t",stack[i]);
        }
        
    }
    
    
}
int main()
{
    printf("enter the size of stack - ");
    scanf("%d",&n);
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
            traversal();
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