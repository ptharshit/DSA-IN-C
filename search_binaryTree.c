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
void preorder(struct node *root)
{
    if (root != NULL)
    {
        printf("%d\t", root->data);
        preorder(root->left);
        preorder(root->right);
    }
}
void postorder(struct node *root)
{
    if (root != NULL)
    {
        postorder(root->left);
        postorder(root->right);
        printf("%d\t", root->data);
    }
}
void inorder(struct node *root)
{
    if (root != NULL)
    {
        inorder(root->left);
        printf("%d\t", root->data);
        inorder(root->right);
    }
}

struct node* search(struct node *root, int key)
{
    if (root == NULL)
    {
        return NULL;
    }
    if (root->data == key)
    {
        return root;
    }
    else if (key < root->data)
    {
        return search(root->left, key);
    }
    else
    {
        return search(root->right, key);
    }
}
// int search(struct node *root, int key)
// {
//     if (root == NULL)
//     {
//         return 0;
//     }
//     if (root->data == key)
//     {
//         return root->data;
//     }
//     else if (key < root->data)
//     {
//         return search(root->left, key);
//     }
//     else
//     {
//         return search(root->right, key);
//     }
// }

struct node *searchIter(struct node *root, int key)
{
    while (root!=NULL)
    {
        if (key == root->data)
        {
            return root;
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

    return NULL;
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

    preorder(p);
    printf("\n");
    postorder(p);
    printf("\n");
    inorder(p);
    printf("\n");

    // int a=search(p,6);
    struct node *n = searchIter(p, 5);
    // printf("%d",search(p,5));
    // if (search(p,5)==5)
    // {
    //     printf("found %d", search(p,5));
    // }
    // else
    // {
    //     printf("key is not found...");
    // }
    if (n != NULL)
    {
        printf("found %d", n->data);
    }
    else
    {
        printf("key is not found...");
    }

    return 0;
}