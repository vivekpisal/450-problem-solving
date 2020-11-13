#include<iostream>
#include<queue>
using namespace std;
class node{
public:
	int data;
	node *right=NULL;
	node *left=NULL;
	node(int val):data(val){}
	void insert(int val)
	{
		if(data!=0)
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
		{
			data=val;
		}
	}
	void leftview(node *root)
	{
		queue<node*> q;
		q.push(root);
		while(!q.empty())
		{
			int size=q.size();
			for(int i=0;i<size;i++)
			{
				node *temp=q.front();
				q.pop();
				if(i==0)
					cout<<temp->data<<" ";
				if(temp->left!=NULL)
				{
					q.push(temp->left);
				}
				if(temp->right!=NULL)
				{
					q.push(temp->right);
				}
				
			}

		}
	}
};
int main()
{
	node root(23);
	root.insert(34);
	root.insert(12);
	root.insert(35);
	root.leftview(&root);

	return 0;
}