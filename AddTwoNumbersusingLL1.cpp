#include<iostream>
using namespace std;
class node
{
public:
	int data;
	node *next=nullptr;
	node(int data):data(data),next(nullptr){}
	void show()
	{
		if(next==nullptr)
			cout<<"Linked list in null";
		else
		{
			node *temp=next;
			while(temp!=nullptr)
			{
				cout<<temp->data;
				temp=temp->next;
			}
		}
	}
};
int main()
{
	node *ll;
	node *temp=ll;
	int n;
	cin>>n;
	while(n--)
	{
		int data;
		cin>>data;
		node *n=new node(data);
		if(ll==nullptr)
			ll=new node(data);
		else
		{
			temp->next=new node(data);
			temp=temp->next;
		}
	}
	ll->show();
	return 0;
}