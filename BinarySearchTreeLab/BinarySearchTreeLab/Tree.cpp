# include "tree.h"

Tree::Tree()
{
	root = nullptr;
}
void Tree::insertNode(int d)
{

	Node* temp = new Node(d);
	Node * current = root;
	if (root == nullptr)
	{
		root = temp;
	}
	else
	{
		while (true)
		{
			if (d < current->data)
			{
				if (current->left == nullptr)
				{
					current->left = temp;
					break;
				}
				current = current->left;
			}

			if (d > current->data)
			{
				if (current->right == nullptr)
				{
					current->right = temp;
					break;
				}
				current = current->right;
			}
		}
	}
}

Node* Tree:: deleteNode(Node* root, int d)
{
	if (root == nullptr)
		cout << "it seems that Tree is empty or data does't exist" << endl;
	else if (d < root->data)
		root->left = deleteNode(root->left, d);
	else if (d > root->data)
		root->right = deleteNode(root->right,d);
	else
	{
		if (root->left && root->right)
		{
			findMax(root->left);
			root->data = v.back();
			root->left = deleteNode(root->left, root->data);
		}
		else
		{
			Node* temp = root;
			if (root->left == nullptr)
				root = root->right;
			else if (root->right == nullptr)
				root = root->left;
			delete temp;
		}
	}

	return(root);
}
Node* Tree::search(Node* root, int d)
{
	if (root == nullptr)
		return (nullptr);
	else if (d < root->data)
		return (search(root->left, d));
	else if (d > root->data)
		return (search(root->right, d));
	return (root);

}
void Tree::preorder(Node* root)
{
	if (root)
	{
		cout << root->data << endl;
		preorder(root->left);
		preorder(root->right);
	}
}
void Tree::inorder(Node* root)
{
	if (root)
	{
		
		inorder(root->left);
		cout << root->data << endl;
		inorder(root->right);
	}
}
void Tree::postorder(Node* root)
{
	if (root)
	{
		postorder(root->left);
		postorder(root->right);
		cout << root->data << endl;
	}
}

void Tree::findMax(Node* root)
{
	if (root)
	{
		findMax(root->left);
		v.push_back(root->data);
		findMax(root->right);
	}
}
void Tree:: mirror(Node * root)
{
	if (root == nullptr)
	{
		return;
	}
	else
	{
		Node * temp;
		mirror(root->left);
		mirror(root->right);

		temp = root->left;
		root->left = root->right;
		root->right = temp;
	}
}