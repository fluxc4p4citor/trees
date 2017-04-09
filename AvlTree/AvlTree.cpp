// AvlTree.cpp : Defines the entry point for the console application.
//
#include "stdafx.h";

#include<stdlib.h>

typedef struct tree_node
{
	int balanceFactor;
	struct tree_node* left;
	struct tree_node* right;
	int data;
} Node;

Node* Tree_insert(Node* root, int value)
{
	Node* parent = root;
	Node* offset = root;

	while (offset != 0)
	{
		if (offset->data < value)
		{
			parent = offset;
			offset = offset->left;
		}
		else if (offset->data > value)
		{
			parent = offset;
			offset = offset->right;
		}
	}


}

Node* Node_init()
{
	Node* node = (Node*)malloc(sizeof(Node));

	node->balanceFactor = 0;
	node->left = 0;
	node->right = 0;
	node->data = 0;

	return node;
}



int main()
{
	Node* test = Node_init();
	printf("");
}

