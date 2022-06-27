#include<stdio.h>
#include<stdlib.h>
int leaf=0;
typedef struct node 
{
    int data;
    struct node *left;
    struct node *right;
}ab;
ab *root=NULL;
int getrightmin(ab *root)
{
    ab* ran=root;
    while(ran->left!=NULL)
    {
        ran=ran->left;
    }
    return ran->data;
}
ab* insert(ab *root,int data)
{
    if(root==NULL)
    {
        root=malloc(sizeof(ab));
        root->data=data;
        root->left=NULL;
        root->right=NULL;
        return root;
    }
    else
    {
        if(root->data>data)
        {
            root->left=insert(root->left,data);
        }
        else if(root->data<data)
        {
            root->right=insert(root->right,data);
        }
        else
        {

        printf("same data cannot be entered twice in a bst ERROR 404:PLEASE EXIT\n");
        exit(1);
        } 
    }
    return root;
}
ab* delete(ab* root,int data)
{
    if(root==NULL)
    {
        printf("Data not found please insert and then try again\n");
        return root;
    }
    if(root->data!=data)
    {
        if(root->data>data)
        {
            root->left=delete(root->left,data);
        }
        else
        root->right=delete(root->right,data);
        return root;

    }
    else
    {
        if(root->left==NULL && root->right==NULL)
        {
            free(root);
            return NULL;
        }
        else if( root->left!=NULL && root->right==NULL)
        {
            ab*temp=root->left;
            free(root);
            return temp;;
        }
        else if(root->left==NULL && root->right!=NULL)
        {
            ab*temp=root->right;
            free(root);
            return temp;
        }
        else if(root->left!=NULL && root->right!=NULL)

        {
            int min=getrightmin(root->right);
            root->data=min;
            root->right=delete(root->right,min);
        }
    }
            return root;
}
void infix(ab *root)
{
    if(root!=NULL)
    {
        infix(root->left);
        printf("%d ",root->data);
        infix(root->right);
      if(root->left==NULL && root->right==NULL)
        leaf++;
        return;
    }
}

int main()
{
    root=insert(root,50);
    root=insert(root,25);
    root=insert(root,20);
    root=insert(root,30);
    root=insert(root,55);
    root=insert(root,52);
    root=insert(root,62);
    root=delete(root,25);
    infix(root);
    printf("\n%d",leaf);
    return 0;
}