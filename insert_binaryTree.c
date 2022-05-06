#include <stdio.h>
#include <stdlib.h>
struct node
{
    int data;
    struct node *left;
    struct node *right;
};
struct node *createnode(int data)
{
    struct node *n = (struct node *)malloc(sizeof(struct node));
    n->data = data;
    n->left = NULL;
    n->right = NULL;
    return n;
}
// void insert(struct node* root,int key){
//     struct node* prev=(struct node*)malloc(sizeof(struct node));
//     while (root!=NULL)
//     {
//         prev=root;
//         if (key==root->data)
//         {
//             return;
//         }
//         else if (key<root->data)
//         {
//             root=root->left;
//         }
//         else
//         {
//             root=root->right;
//         }
//         struct node* new=createnode(65);
//         if (key<prev->data)
//         {
//             prev->left=new;
//         }
//         else
//         {
//             prev->right=new;
//         }
//     }
// }
void insert(struct node *root, int key)
{
    struct node *prev = NULL;
    while (root != NULL)
    {
        prev = root;
        if (key == root->data)
        {
            return;
        }
        else if (key < root->data)
        {
            root = root->left;
        }
        else
        {
            root = root->right;
        }
    }
    struct node *new = createnode(key);
    if (key < prev->data)
    {
        prev->left = new;
    }
    else
    {
        prev->right = new;
    }
}
void inOrder(struct node* root){
    if (root!=NULL)
    {
        inOrder(root->left);
        printf("%d\t",root->data);
        inOrder(root->right);
    }
    
}
int main()
{
    struct node *p = createnode(50);
    struct node *p1 = createnode(10);
    struct node *p2 = createnode(30);
    struct node *p3 = createnode(5);
    struct node *p4 = createnode(60);
    struct node *p5 = createnode(55);
    /*
                   50
                /     \
              10       60
             /  \      /
            5    30   55
    */
    p->left = p1;
    p->right = p4;
    p1->left = p3;
    p1->right = p2;
    p4->left = p5;
    insert(p,56);
    inOrder(p);
    return 0;
}