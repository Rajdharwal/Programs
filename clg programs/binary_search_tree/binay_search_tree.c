// C program to demonstrate insert
// operation in binary
// search tree.
#include <stdio.h>
#include <stdlib.h>

struct node {
	int data;
	struct node *left, *right;
};

// A utility function to create a new BST node
struct node* newNode(int item)
{
	struct node* temp
		= (struct node*)malloc(sizeof(struct node));
	temp->data = item;
	temp->left = temp->right = NULL;
	return temp;
}

// A utility function to do inorder traversal of BST
void inorder(struct node* root)
{
	if (root != NULL) {
		inorder(root->left);
		printf("%d \n", root->data);
		inorder(root->right);
	}
}

void preorder(struct node* root)
{
	if (root != NULL) {
		printf("%d \n", root->data);
		preorder(root->left);
		preorder(root->right);
	}
}

void postorder(struct node* root)
{
	if (root != NULL) {
		postorder(root->left);
		postorder(root->right);
		printf("%d \n", root->data);
	}
}

/* A utility function to insert
a new node with given data in
* BST */
struct node* insert(struct node* node, int data)
{
	/* If the tree is empty, return a new node */
	if (node == NULL)
		return newNode(data);

	/* Otherwise, recur down the tree */
	if (data < node->data)
		node->left = insert(node->left, data);
	else if (data > node->data)
		node->right = insert(node->right, data);

	/* return the (unchanged) node pointer */
	return node;
}

// Driver Code
int main()
{
	/* Let us create following BST
			50
		  /	  \
		30	  70
		/ \   / \
	   20 40 60 80 */
	struct node* root = NULL;
	root = insert(root, 50);
	insert(root, 30);
	insert(root, 20);
	insert(root, 40);
	insert(root, 70);
	insert(root, 60);
	insert(root, 80);

	// print inoder traversal of the BST
	printf("Inorder:\n");
	inorder(root);
	printf("\npreorder:\n");
	preorder(root);
	printf("\npostorder:\n");
	postorder(root);

	return 0;
}
