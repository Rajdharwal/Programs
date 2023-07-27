#include<stdio.h>
#include<stdlib.h>
struct node{
    int data;
    struct node *left;
    struct node *right;

};
struct node* newNode(int data)
{

    struct node* node=(struct node*)malloc(sizeof(struct node));
    node->data=data;
    node->left=NULL;
    node->right=NULL;
    return(node);
};
void inorderTraversal(struct node* node)
{
    if(node==NULL)
    {
        return;
    }
    inorderTraversal(node->left);
    printf("%d",node->data);
    inorderTraversal(node->right);
}
void postorder(struct node* node)
{
    if(node==NULL)
        return;
    postorder(node->left );
    postorder(node->right);
    printf("%d",node->data);

}
void preorder(struct node* node)
{
    if(node==NULL)
    {
        return;
    }
    printf("%d",node->data);
    preorder(node->left);
    preorder(node->right);
}
int main()
{
    struct node*root=newNode(1);
    root->left=newNode(2);
    root->right=newNode(3);
    root->left->left=newNode(4);
    root->left->right=newNode(5);
    printf("\ninorder traversal\n");;
    inorderTraversal(root);
    printf("\npostorder traversal\n");
    postorder(root);
    printf("\npreorder traversal\n");
    preorder(root);
}
