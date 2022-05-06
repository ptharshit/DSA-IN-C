#include <stdio.h>
#include <stdlib.h>
struct node{
    int data;
    struct node * left;
    struct node * right;
};
struct node * createnode(int data){
    struct node *a = (struct node *) malloc (sizeof(struct node));
    a ->data = data;
    a->left = NULL;
    a->right = NULL;
    return a;
}
// void preorder(struct node* n){
//     if (n!= NULL){
//         printf("%d\t",n->data);
//         preorder(n->left);
//         preorder(n->right);
//     }
// }
void inOrder(struct node* root){
    if (root!=NULL)
    {
        inOrder(root->left);
        printf("%d\t",root->data);
        inOrder(root->right);
    }
}
void insert(struct node *root,int key)
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
int main()
{
    struct node* a = createnode(50);
    struct node* b = createnode(10);
    struct node* c = createnode(60);
    struct node* d = createnode(5);
    struct node* e = createnode(30);
    struct node* f = createnode(55);
    a->left = b;
    a->right = c;
    b->left=d;
    b->right = e;
    c->left = f;
    // preorder(a);
    // inOrder(a);
    // printf("\n");
    insert(a,15);
    inOrder(a);
    return 0;
}