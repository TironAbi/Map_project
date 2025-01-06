#include<stdio.h>
#include<stdlib.h>

struct Node
{
	int key;
	struct Node *left;
	struct Node *right;
	int height;
	//height il facem balance
};

int maximum(int a, int b);

int height(struct Node *N)
{
	if (N == NULL)
		return 0;
	return N->height;
}

int maximum(int a, int b) {
	return (a > b) ? a : b;
}

struct Node* newNode(int key)
{
	struct Node* node = (struct Node*)
		malloc(sizeof(struct Node));
	node->key = key;
	node->left = NULL;
	node->right = NULL;
	node->height = 1;  // new node is initially added at leaf 
	return(node);
}

 int main(){
    
    
    return 0;
     }