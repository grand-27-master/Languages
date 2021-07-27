//BST operations

#include<iostream>
using namespace std;
struct node
{
	int data;	
	struct node* right;// connects to right node 
	struct node* left;// connects to left node
};
struct node* root=NULL;// intialising root 

void insert(int n)// element to insert
{
	struct node* temp,*p;// points to root and parent variable
	temp=(struct node*)malloc(sizeof(struct node))// creating a node to insert
	temp->left=NULL;
	temp->right=NULL;// intialising 
	temp->data=n;// storing data in element
	if(root==NULL)
	temp=root;
	else
	{
		struct node* cur;// current node
		cur=root;
		while(cur)
		{
			if(temp->data>cur->data)
			cur=cur->right;// moving to right side of tree
			else
			cur=cur->left;// moving to left side of tree
		}
	}
	if(p->data>temp->data)// checking that parent node is greater or less than temp after current node has reached null value
	temp=p->left;
	else
	temp=p->right;
}


void del()
{
	struct node* p,*cur;
	if(p->right==cur)
	p->right=NULL;// deleting right side of node
	else
	p->left=NULL;// deleting left side of node
}

/*
inorder-left>parent>right
preorder-parent>left>right
postoder-left>right>parent
*/


void traverse()
{
	struct node* temp;
	if(temp->left)
	{
		traverse(temp->left);// using recursive function to display values
	}
	cout<<"left elements are="<<temp->data;
	if(temp->right)
	{
		traverse(temp->right);
	}
	cout<<"\nright elements are="<<temp->data;
}

void height()
{
	struct node* temp;
	int left_height=max;
	int right_height=max;
	if(left_height>right_height)
	cout<<left_height+1;
	else
	cout<<right_height+1;
}
