#include<bits/stdc++.h>

using namespace std;

class node{
	public:
		int data;
		node* left;
		node* right;
		
		node(int data){
			this->data = data;
			this->left = NULL;
			this->right = NULL;
		}
};

node* createBinaryTree(node* root){
	int data;
	cout << "Enter Data : ";
	cin >> data;
	
	root = new node(data);
	
	if(data == -1){
		return NULL;
	}
	
	cout << "Enter The Left Child Of " << root->data << endl;
	root->left = createBinaryTree(root->left);
	
	cout << "Enter The Right Child Of " << root->data << endl;
	root->right = createBinaryTree(root->right);
	
	return root;
}

void inorder(node* root){
	if(root == NULL) return;
	
	inorder(root->left);
	cout << root->data << ' ';
	inorder(root->right); 
}

void postorder(node* root){
	if(root == NULL) return ;
	
	inorder(root->left);
	inorder(root->right);
	cout << root->data << ' ';
}

int main(){
	node* root = NULL;
	
	root = createBinaryTree(root);
	
	inorder(root);
	cout << endl;
	postorder(root);
	return 0;
	
}
