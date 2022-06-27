#include <stdio.h>
#include <stdlib.h>
typedef struct node
{
    int data;
    struct node *left;
    struct node *right;
    int height;
} ab;
ab *root;
int getheight(ab *root)
{
    if (root == NULL)
        return 0;
    else
        return root->height;
}
int max(int a, int b)
{
    return (a > b) ? a : b;
}
int bf(ab *root)
{
    if (root == NULL)
        return 0;
    else
        return getheight(root->left) - getheight(root->right);
}
ab *rr(ab *y)
{
    ab *x = y->left;
    // if (x->right != NULL)
    ab *t2 = x->right;
    x->right = y;
    y->left = t2;
    x->height = max(getheight(x->right), getheight(x->left));
    y->height = max(getheight(y->right), getheight(y->left));
    return x;
}
ab *lr(ab *x)
{
    ab *y = x->right;
    // if (y->left != NULL)
    ab *t2 = y->left;
    y->left = x;
    x->right = t2;
    x->height = 1 + max(getheight(x->right), getheight(x->left));
    y->height = 1 + max(getheight(y->right), getheight(y->left));
    return y;
}
ab *insrt(ab *root, int data)
{
    if (root == NULL)
    {
        root = malloc(sizeof(ab));
        root->data = data;
        root->left = NULL;
        root->right = NULL;
        root->height = 1;
        return root;
    }
    else
    {
        if (root->data > data)
        {
            root->left = insrt(root->left, data);
        }
        else if (root->data < data)
        {
            root->right = insrt(root->right, data);
        }
        else
        {

            printf("same data cannot be entered twice in a bst ERROR 404:PLEASE EXIT\n");
            exit(1);
        }
    }
    root->height = 1 + max(getheight(root->left), getheight(root->right));
    int b = bf(root);
    if (b < -1 && root->data < data)
        return lr(root);
    if (b > 1 && root->data > data)
        return rr(root);
    else if (b > 1 && root->data < data)
    {
        root->left = lr(root);
        return rr(root);
    }
    else if (b < -1 && root->data > data)
    {
        root->right = rr(root);
        return lr(root);
    }
    return root;
}
void preorder(struct node *root)
{
    if (root != NULL)
    {
        printf("%d ", root->data);
        preorder(root->left);
        preorder(root->right);
    }
}
int main()
{
    root = insrt(root, 1);
    root = insrt(root, 2);
    root = insrt(root, 3);
    root = insrt(root, 4);
    root = insrt(root, 5);
    preorder(root);
    return 0;
}