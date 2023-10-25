// Preorder

#include <stdio.h>
#include<stdlib.h>
struct node 
{
  int data;
  struct node *right;
  struct node *left;
};
struct node *newnode(int data)
{
    struct node newnode=(struct node)malloc(sizeof(struct node));
    newnode->data=data;
    newnode->left=NULL;
    newnode->right=NULL;
}
struct node *insert(struct node *root,int key)
{
    if(root==NULL)
    {
        return newnode(key);
    }
    if(key<root->data)
    {
        root->left=insert(root->left,key);
    }
    else
    {
        root->right=insert(root->right,key);
    }
    return root;
}
void display(struct node *root)
{
      if(root!=NULL) 
      {
        printf(" %d ",root->data);
        display(root->left);
        display(root->right);
      }
}
int main()
{
   struct node *root=NULL; 
   root=insert(root,7);
   root=insert(root,8);
   root=insert(root,9);
   root=insert(root,4);
   root=insert(root,5);
   printf("Inorder traversal is");
   display(root);
}
