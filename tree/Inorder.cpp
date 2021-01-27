#include<bits/stdc++.h>
using namespace std;

class node{
public:
	int data;
	node* left;
	node* right;
	node(int val)
	{data=val;
		left=NULL;
		right=NULL;}
};
void preorder(node* root)
{
	if(root == NULL)
		return;
	if(root->left!=NULL)
		preorder(root->left);	
	cout<<root->data<<" ";
	if(root->right!=NULL)
		preorder(root->right);
}

void preorder1(node* root)
{
	stack<node*> s;
	node* curr=root;
	s.push(root);
	while(curr!=NULL || s.empty()==false)
	{
		while(curr!=NULL)
		{
			s.push(curr->left);
			curr=curr->left;
		}

		curr=s.top();
		s.pop();
		cout<<curr->data<<" ";
		if(curr->right!=NULL)
			curr=curr->right;

	}
}
int main()
{	
	node* root=new node(10);
	node* left1=new node(6);
	node* left2=new node(3);
	node* left3=new node(5);
	node* right1=new node(2);
	node* right2=new node(6);
	root->left=left1;
	left1->left=left2;
	left1->right=left3;
	root->right=right1;
	right1->left=right2;
	preorder1(root);
	return 0;
}