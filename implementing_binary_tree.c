#include <stdio.h>
#include <stdlib.h>
struct node{
    int data;
    struct node* left;
    struct node* right;
};
struct node* createnode(int data){
    struct node* n= (struct node*)malloc(sizeof(struct node));
    n->data=data;
    n->left=NULL;
    n->right=NULL;
    return n;
}
int main()
{
    // struct node* p = (struct node*)  malloc(sizeof(struct node));
    // p->data=10;
    // p->left=NULL;
    // p->right=NULL;

    // struct node* p1 = (struct node*)  malloc(sizeof(struct node));
    // p1->data=20;
    // p1->left=NULL;
    // p1->right=NULL;

    // struct node* p2 = (struct node*)  malloc(sizeof(struct node));
    // p2->data=30;
    // p2->left=NULL;
    // p2->right=NULL;
    
    struct node* p=createnode(10);
    struct node* p1=createnode(20);
    struct node* p2=createnode(30);
    struct node* p3=createnode(40);
    p->left=p1;
    p->right=p2;
    p2->right=p3;
    return 0;
}
























// #include <stdio.h>
// #include <stdlib.h>
// struct node{
//     int data;
//     struct node* left;
//     struct node* right;
// };
// void creadenode(){
//     int a,b;
    
//     struct node* p=(struct node*)malloc(sizeof(struct node));
//     printf("enter the data - ");
//     scanf("%d",&p->data);
//     do{
//     printf("press 1 to enter data..");
//     scanf("%d",&a);
//     if (a==1)
//     {
//         printf("enter the data - ");
//         scanf("%d",&b);
//         if (b>p->data)
//         {
//             p->right=(struct node*)malloc(sizeof(struct node));
//             p->right->data=b;
//         }
//         else
//         {
//             p->left=(struct node*)malloc(sizeof(struct node));
//             p->left->data=b;
//         }
//     }
//     else
//     {
//         exit(0);
//     }    
        
//     }while (a==1);
  

// }
// int main()
// {
//     creadenode();
//     return 0;
// }