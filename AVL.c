#include <stdlib.h>
#include <stdio.h>

struct node
{
    int data;
    struct node *left;
    struct node *right;
    int height;
};
int calculateHeight(struct node *root)
{
    int lh = 0;
    int rh = 0;

    if (root->left != NULL)
    {
        lh = root->left->height;
    }

    if (root->right != NULL)
    {
        rh = root->right->height;
    }

    return rh > lh ? rh : lh;
}

int calculateBF(struct node *root)
{
    int lh = 0;
    int rh = 0;

    if (root->left != NULL)
    {
        lh = root->left->height;
    }

    if (root->right != NULL)
    {
        rh = root->right->height;
    }

    return lh - rh;
}

struct node* leftRotate(struct node *root){
    struct node *rr = root->right;
    root->right = rr->left;//50->right=NULL 
    rr->left = root; //60->left = 50 


    return rr; //60 
}

struct node* rightRotate(struct node *root){
    struct node *rl = root->left;//60
    root->left=rl->right; 
    rl->right = root;
    return rl; 
}
struct node *addNode(struct node *root, int data) // 50,10  | 40,10 | NULL,10
{
    if (root == NULL)
    {
        root = malloc(sizeof(struct node));
        root->data = data;
        root->left = NULL;
        root->right = NULL;
        root->height = 1;
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
        root->left = addNode(root->left, data); //
    }
    root->height = calculateHeight(root) + 1;
    int bf = calculateBF(root);

    if (bf < -1 || bf > 1)
    {
        printf("\nImbalance => %d", root->data);
        if (bf < -1)
        {
            // right
            printf("\nRIGHT");
            if (data > root->right->data)
            {
                printf("\nRIGHT");
                root = leftRotate(root);//50=>60
            }
            else
            {
                printf("\nLEFT");
            }
        }
        else
        {
            // left
            printf("\nLEFT");
            if (data < root->left->data)
            {
                printf("\nLEFT");
                root = rightRotate(root);
            }
            else
            {
                printf("\nRIGHT");
            }
        }
    }

    return root;
}

void inOrder(struct node *root)
{
    if (root != NULL)
    {
        inOrder(root->left);                         // left
        printf(" %d(%d)", root->data, root->height); // root
        inOrder(root->right);                        // right
    }
}

void preOrder(struct node *root)
{
    if (root != NULL)
    {
        printf(" %d", root->data); // root
        preOrder(root->left);      // left
        preOrder(root->right);     // right
    }
}

void postOrder(struct node *root)
{
    if (root != NULL)
    {
        postOrder(root->left);
        postOrder(root->right);
        printf(" %d", root->data);
    }
}

int main()
{
    struct node *root = NULL;
    // RR
    root = addNode(root, 70);
    root = addNode(root, 80);
    root = addNode(root, 40);
    root = addNode(root, 75);
    root = addNode(root, 90);
    root = addNode(root, 100);

   
    //LL
    // root = addNode(root, 70);
    // root = addNode(root, 60);
    // root = addNode(root, 50);

    

    //RL
    // root = addNode(root, 50);
    // root = addNode(root, 70);
    // root = addNode(root, 60);



    //LR
    // root = addNode(root, 70);
    // root = addNode(root, 50);
    // root = addNode(root, 60);

     printf("\n%d\n",root->data);

    inOrder(root);

    return 0;
}