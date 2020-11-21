#include<iostream>
#include<queue>
#include<vector>
using namespace std;

class ll
{
public:
	int data;
	ll *next;
	ll(int data):data(data),next(NULL){}
	void show()
	{	
		if(next==NULL)
			cout<<"LL is empty "<<endl;
		else
		{
			ll *temp=next;
			while(temp!=NULL)
			{
				cout<<temp->data<<" ";
				temp=temp->next;
			}
		}
	}
};

class node{
public:
	int data;
	node *right,*left;
	node(int val):data(val),right(NULL),left(NULL){}
	void insert(int val)
	{
		if(data)
		{
			if(val>data)
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
	void show(node *root)
	{
		if(root->right)
			show(root->right);
		cout<<root->data<<" ";
		if(root->left)
			show(root->left);
	}
	void bfs(node *root)
	{
		queue<node*> q;
		ll *LL;
		q.push(root);
		while(!q.empty())
		{
			for(int i=0;i<q.size();i++)
			{
				node *node=q.front();
				q.pop();
				ll *newnode=new ll(node->data);
				if(LL==NULL)
					LL=newnode;
				else
				{
					ll *temp=LL;
					while(temp->next!=NULL)
						temp=temp->next;
					temp->next=newnode;
				}
				if(node->right!=NULL)
					q.push(node->right);
				if(node->left!=NULL)
					q.push(node->left);
			}
		}
		LL->show();
	}
};
int main()
{
	node n(23);
	n.insert(24);
	n.insert(25);
	n.insert(11);
	n.insert(25);
	n.insert(12);
	n.bfs(&n);
	return 0;
}