#include<bits/stdc++.h>
using namespace std;

class Node{
	public:
		int data;
		Node* left;
		Node* right;
		
		Node(int value){
			data = value;
			left = NULL;
			right = NULL;
		}
};

class BST{
	public:
		Node* insert(Node* root , int value){
			if(root == NULL){
				root = new Node(value);
				return root;
			}
			
			if(value > root->data){
				root->right = insert(root->right , value);
			}
			else if(value < root->data){
				root->left = insert(root->left , value);
			}
			return root;
		}
		
		void inorder(Node* root){
			if(root == NULL){
				return;
			}
			inorder(root->left);
			cout << root->data << " ";
			inorder(root->right);
		}
};

int main(){
	Node *root = NULL;
	BST b;
	
	root = b.insert(root , 50);
	
	b.insert(root, 30);
	b.insert(root, 20);
	b.insert(root, 40);
	b.insert(root, 70);
	b.insert(root, 60);
	b.insert(root, 80);

	b.inorder(root);

	return 0;
}
