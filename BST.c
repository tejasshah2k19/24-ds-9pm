#include <stdlib.h>
#include <stdio.h>

struct node
{
    int data;
    struct node *left;
    struct node *right;
};

struct node *addNode(struct node *root, int data)//50,10  | 40,10 | NULL,10 
{
    if (root == NULL)
    {
        root = malloc(sizeof(struct node));
        root->data = data;
        root->left = NULL;
        root->right = NULL;
        return root;
    }
    else if (data > root->data)
    {
        // right
        root->right = addNode(root->right, data);
    }
    else if (data < root->data)
    {
        // left
        root->left = addNode(root->left, data);// 
    }
    return root;
}

int main()
{
    struct node *root = NULL;
    root = addNode(root, 50);
    addNode(root, 40);
    addNode(root,60);
    addNode(root,10);
    printf("\n %d %d %d", root->data,root->left->data,root->right->data);
    printf("\n%d ",root->left->left->data);
    return 0;
}