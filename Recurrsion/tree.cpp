#include <iostream>
using namespace std;

class BST {
	public:
		int data;
		BST *left, *right;

		BST(int value)
		{
			data = value;
			left = NULL;
			right = NULL;
		}
};

BST* Insert(BST* root, int value)
{
	if (!root) {
		return new BST(value);
	}

	if (value > root->data) {
		root->right = Insert(root->right, value);
	}
	else if (value < root->data) {
		root->left = Insert(root->left, value);
	}

	return root;
}

BST* search(BST* root, int key)
{
	if (root == NULL || root->data == key)
		return root;

	if (root->data < key)
		return search(root->right, key);

	return search(root->left, key);
}


void Inorder(BST* root)
{
	if (!root) {
		return;
	}
	Inorder(root->left);
	cout << root->data << " ";
	Inorder(root->right);
}
int main()
{
	BST *root = NULL;
	root = Insert(root, 50);
	Insert(root, 30);
	Insert(root, 20);
	Insert(root, 40);
	Insert(root, 70);
	Insert(root, 60);
	Insert(root, 80);

	Inorder(root);
	
	cout << endl;
	
	if (search(root, 70) == NULL)
		cout << "not found" << endl;
	else
		cout << "found" << endl;

	return 0;
}

