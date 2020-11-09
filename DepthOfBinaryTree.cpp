#include<iostream>
using namespace std;
class node
{
	public:
	int data=0;
	node *right=NULL;
	node *left=NULL;
	node(int data)
	{this->data=data;}
	void insert(int value)
	{
		if(data==0)
		{
			if(data>value)
			{
				if(right==NULL)
					right=new node(value);
				else
					right->insert(value);
			}
			else
			{
				if(left==NULL)
					left=new node(value);
				else
					left->insert(value);
			}
		}
		else
		{
			data=value;
		}
	}
	void show()
	{
		if(right!=NULL)
			right->show();
		cout<<data<<" ";
		if(left!=NULL)
			left->show();

	}
};

int main()
{
	node root(10);
	root.insert(11);
	root.insert(8);
	root.show();
	return 0;
}