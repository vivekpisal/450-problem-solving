#include<bits/stdc++.h>
using namespace std;
class node{
public:
	int data;
	node *next;
	node(int data){this->data=data;next=NULL;}
	node(){next=NULL;}
};

void addNode(node* &head,int val)
{
	node *n = new node(val);
	if(head == NULL)
	{
		head=n;
	}
	else
	{
		node* temp=head;
		while(temp->next!=NULL)
			temp=temp->next;
		temp->next=n;
	}
}

node* reverse(node* head)
{
	node* prev=NULL,*curr=head,*forw=head->next;
	while(curr->next!=NULL)
	{
		curr->next=prev;
		prev=curr;
		curr=forw;
		forw=forw->next;
	}
	curr->next=prev;
	return curr;
}

void show(node* head)
{
	if(head == NULL)
	{
		cout<<"Linked List Is Empty";
	}
	else
	{
		node* temp=head;
		while(temp!=NULL)
		{
			cout<<temp->data<<" ";
			temp=temp->next;
		}
		cout<<endl;
	}
}

int main()
{
	node* head=new node();
	addNode(head,1);
	addNode(head,2);
	addNode(head,3);
	addNode(head,4);
	addNode(head,5);
	show(head);
	head=reverse(head);
	show(head);
	return 0;
}