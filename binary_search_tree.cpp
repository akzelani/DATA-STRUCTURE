#include<iostream>
#include<stdio.h>
using namespace std;
struct BstNode
{
    int data;
    struct BstNode* left;
    struct BstNode* right;
};
struct BstNode* root=NULL;
struct BstNode* GetNewNode(int data)
{
    struct BstNode* newnode;
    newnode =(struct BstNode*)malloc(sizeof(struct BstNode));
    newnode->left=NULL;
    newnode->right=NULL;
    newnode->data=data;
    return newnode;
};

struct BstNode* Add_Node(struct BstNode* root,int element)
{
    if(root==NULL)
    {
        root=GetNewNode(element);

    }
    else if(root->data>element)
    {
        root->left=Add_Node(root->left,element);
    }
    else
    {
         root->right=Add_Node(root->right,element);
    }
    return root;
};

struct BstNode *FindMin(BstNode *root){
	while(root->left != NULL){
        root = root->left;
    }
	return root;
}

struct BstNode* Remove(struct BstNode *root, int data){
	if(root == NULL){
        return root;
    }
	else if(data < root->data){
        root->left = Remove(root->left, data);
    }
	else if(data > root->data){
        root->right = Remove(root->right, data);
    }


	else{
		if(root->left == NULL && root->right == NULL){
			delete root;
			root = NULL;
		}

		else if(root->left == NULL){
			BstNode *temp = root;
			root = root->right;
			delete temp;
		}
		else if(root->right == NULL){
			BstNode *temp = root;
			root = root->left;
			delete temp;
		}

		else{
			BstNode *temp = FindMin(root->right);
			root->data = temp->data;
			root->right = Remove(root->right, temp->data);
		}
	}
	return root;
}



void preorderTraversal(struct BstNode* root)
{
    if(root==NULL)
    {
        return;
    }
     cout<<root->data<<"->";
     preorderTraversal(root->left);
     preorderTraversal(root->right);
}
void postorderTraversal(struct BstNode* root)
{
    if(root==NULL)
    {
        return;
    }
    postorderTraversal(root->left);
    postorderTraversal(root->right);
    cout<<root->data<<"->";
}


int main()
{

	root = Add_Node(root, 10);
	Add_Node(root,1);
	Add_Node(root, 3);
	Add_Node(root, 2);
	Add_Node(root, 4);
	Add_Node(root, 7);
	Add_Node(root, 6);
	Add_Node(root,8);
	Add_Node(root,15);
	Add_Node(root,20);
	Add_Node(root,22);
	Add_Node(root,100);
	Add_Node(root,5);
	Add_Node(root,16);
	Add_Node(root,13);
	Remove(root,1);
    cout << "Tree Traversal" << "\n";
    cout << "Preorder Traversal  ---> ";
    preorderTraversal(root);
    cout << "\n";
    cout << "Postorder Traversal ---> ";
    postorderTraversal(root);
}
