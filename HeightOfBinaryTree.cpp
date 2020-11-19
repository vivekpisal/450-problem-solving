#include<iostream>
#define INT_MIN -10000
using namespace std;
class node
{
public:
	int data;
	node *right;
	node *left;
	node(int val):right(NULL),left(NULL),data(val){} 
	void insert(int val)
	{
		if(data)
		{
			if(data<val)
			{
				if(right==NULL)
					right=new node(val);
				else
					right->insert(val);
			}
			else
			{
				if(left==NULL)
					left=new node(val);
				else
					left->insert(val);
			}
		}
		else
			data=val;
	}
	int height(node *root)
	{
		if(root==NULL)
			return 0;
		int rh=height(root->right);
		int lh=height(root->left);
		return 1+max(rh,lh);
	}
	void show(node *root)
	{
		if(root==NULL)
			return;
		show(root->right);
		cout<<root->data<<" ";
		show(root->left);
	}

};
int main()
{
	node n(20);
	n.insert(23);
	n.insert(12);
	n.insert(13);
	n.insert(14);
	n.insert(15);
	n.insert(24);
	cout<<n.height(&n);
	return 0;
}