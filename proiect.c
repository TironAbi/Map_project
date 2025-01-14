#include<stdio.h>
#include<stdlib.h>
#include<stdbool.h>

struct Node{
	int key;
	struct Node* left;
	struct Node* right;
};


struct Node* createNode(int key){
struct Node* newNode=(struct Node*)malloc(sizeof(struct Node));

newNode->key=key;
newNode->left=NULL;
newNode->right=NULL;

return newNode;
}


struct Node* insert(struct Node* node, int key){
	if(node==NULL){
		return createNode(key);
	}

	if(key<node->key){
		node->left=insert(node->left, key);
	}
	else{
		node->right=insert(node->right, key);
	}

	return node;
}


void preOrder(struct Node* node){
	if(node!=NULL){
		printf(%d, node->key);
		preOrder(node->left);
		preOrder(node->right);
	}
}


void inOrder(struct Node* node){
	if(node!=NULL){
		inOrder(node->left);
		printf(%d, node->key);
		inOrder(node->right);
	}
}


void postOrder(struct Node* node){
	if(node!=NULL){
		postOrder(node->left);
		postOrder(node->right);
		printf(%d, node->key);
	}
}






int main(){
	struct Node* root=NULL;

	int elements[]={50, 30, 20, 40, 70, 60, 80};
	int n=sizeof(elements)/sizeof(elements[0]);

	for(int i=0; i<n; i++){
		root=insert(root, elements[i]);
	}

	printf("Traversare in pre-ordine: \n");
	preOrder(root);
	printf("\n");

	printf("Traversare in in-ordine: \n");
	inOrder(root);
	printf("\n");

	printf("Traversare in post-ordine: \n");
	postOrder(root);
	printf("\n");


	return 0;
}