#include <bits/stdc++.h>

using namespace std;

class Node {
public:
	int data;
	Node* left;
	Node* right;
};

Node* newNode(int data) {
	Node* node = new Node();
	node->data = data;
	node->left = NULL;
	node->right = NULL;

	return node;
}

int height(Node* root) {
	if (root == NULL) return 0;

	// Finding the height of left subtree
	int leftTreeHeight = height(root->left);

	// Finding the height of right subtree
	int rightTreeHeight = height(root->right);

	return 1 + max(leftTreeHeight, rightTreeHeight);
}

int main()
{
	Node *root = newNode(1);
	root->left = newNode(2);

	root->right = newNode(3);
	root->right->left = newNode(4);
	root->right->right = newNode(5);
	root->right->left->left = newNode(6);

	// Tree is
	/*
		  1
		/	\
	   2	 3
	   		/  \
	   	   4	5
	   	  /
	   	 6
	*/
	// The height of the above binary tree is 4
	int ans = height(root);
	cout << "Height: " << ans << endl;
	return 0;
}