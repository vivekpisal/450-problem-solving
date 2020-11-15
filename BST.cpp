#include<iostream>
using namespace std;
class node
{
public:
	int data;
	node *right;
	node *left;
	node()
	{right=NULL;left=NULL;}
	node(int val)
	{data=val;right=NULL;left=NULL;}
	void insert(int val)
	{
		if(data)
		{
			if(data<val)
				if(right==NULL)
					right=new node(val);
				else
					right->insert(val);
			else
				if(left==NULL)
					left=new node(val);
				else
					left->insert(val);
		}
		else
			data=val;
	}
	node* search(node *root,int key)
	{
		if(root==NULL || root->data==key)
			return root;
		if(root->data > key)
			return search(root->left,key);
		return search(root->right,key);
	}
};
int main()
{
	node n;
	n.insert(23);
	n.insert(24);
	n.insert(12);
	n.insert(13);
	n.insert(15);
	int ser=15;
	node *key=n.search(&n,ser);
	if(key->data==ser)
		cout<<"found";
	else
		cout<<"Not same";

	return 0;
}