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

