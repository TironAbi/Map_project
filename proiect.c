#include<stdio.h>
#include<stdlib.h>
#include<stdbool.h>

struct Node{
	int data;
	struct Node* left;
	struct Node* right;
};


struct Node* createNode(int data){
struct Node* newNode=(struct Node*)malloc(sizeof(struct Node));

newNode->data=data;
newNode->left=NULL;
newNode->right=NULL;

return newNode;
}


struct Node* insert(struct Node* node, int data){
	if(node==NULL){
		return createNode(data);
	}

	if(data<node->data){
		node->left=insert(node->left, data);
	}
	else{
		node->right=insert(node->right, data);
	}

	return node;
}




int main(){
	struct Node* root=NULL;

	int elemets[]={50, 30, 20, 40, 70, 60, 80};
	int n=sizeof(elements)/sizeof(elements[0]);

	for(int i=0; i<n; i++){
		root=insert(root, elements[i]);
	}


	return 0;
}