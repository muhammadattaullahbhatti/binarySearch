#pragma once
# include "node.h"
class Tree
{
public:
	vector <int> v;
	
	Node* root;
	Tree();
	void insertNode(int);
 	Node* deleteNode(Node *, int);
	Node* search(Node*, int);
	void preorder(Node*);
	void inorder(Node*);
	void postorder(Node*);
	void findMax(Node*);
	void mirror(Node *);
};