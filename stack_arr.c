#include <stdio.h>
int stack[5];
int top=-1;
void push(){
    int data;
    if (top==4)
    {
        printf("stack is full.\n");
    }
    else
    {
        printf("enter the data : ");
        scanf("%d",&data);
        top++;
        stack[top]=data;
    }
    
    
}
int pop(){
    int data;
    if (top==-1)
    {
        printf("\nstack is empty.\n");
    }
    else
    {
        data=stack[top];
        top--;
        return top;
    }
    
}
void traverse(){
    int i;
    if (top==-1)
    {
        printf("stack is empty.\n");
    }
    else
    {
        for ( i = top; i > -1; i--)
        {
            printf("the data = %d.\n",stack[i]);
        }
        
    }
    
}
int main()
{
    int a,c;
    
    do
    {
        printf("1 - for push\n");
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
            printf("exit the stack.\n");
            break;
        default:
            printf("enter the right choice....");
            break;
        }
    }while (a!=4);
    return 0;

}