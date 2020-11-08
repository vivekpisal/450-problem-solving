#include<iostream>
using namespace std; 

class node
{
public:
	int data;
	node *next=NULL;
};
void printlist(node *n)
{
	while(n!=NULL)
	{
		cout<<n->data<<" ";
		n=n->next;
	}
}
void middle(node *n)
{
	node *slow=n;
	node *fast=n;
	while(fast->next!=NULL)
	{
		slow=slow->next;
		fast=fast->next->next;
	}
	cout<<endl<<slow->data;
}
int main()
{
	node *head=new node();
	int n;
	cin>>n;
	while(n--)
	{
		int data;
		cin>>data;
		node *first=new node();
		first->data=data;
		if(head==NULL)
		{
			head->next=first;
		}
		else
		{
			node *temp=head;
			while(temp->next!=NULL)
				temp=temp->next;
			temp->next=first;
		}
	}
	printlist(head->next);
	middle(head->next);
	return 0;
}