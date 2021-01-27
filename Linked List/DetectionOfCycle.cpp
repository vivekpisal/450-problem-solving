#include<bits/stdc++.h>
using namespace std;
class node
{
public:
	int data;
	node* next;

	node(int val) {
		data=val;
		next=NULL;
	}
};

void insertNode(node* &head,int val)
{
	node* n = new node(val);
	if(head == NULL)
		head=n;
	else
	{
		node* temp=head;
		while(temp->next!=NULL)
			temp=temp->next;
		temp->next=n;
	}
}

void display(node* head)
{
	if(head==NULL)
		return;
	else
	{
		node* temp=head;
		while(temp!=NULL)
		{
			cout<<temp->data<<"->";
			temp=temp->next;
		}
		cout<<"NULL"<<endl;
	}
}

void addcycle(node* &head,int val)
{
	node* temp=head;
	while(temp->next!=NULL)
		temp=temp->next;
	node* temp1=head;
	while(temp1->data!=val)
		temp1=temp1->next;
	temp->next=temp1;
}

void detectcycle(node* &head)
{
	node* slow=head;
	node* fast=head;
	while(fast != NULL && fast->next!=NULL)
	{
		slow=slow->next;
		fast=fast->next->next;
		if(fast == slow)
		{
			cout<<"Found Cycle";
			break;
		}
		
	}
}

int main()
{
	node* head=NULL;
	insertNode(head,1);
	insertNode(head,2);
	insertNode(head,3);
	insertNode(head,4);
	insertNode(head,5);
	insertNode(head,6);
	insertNode(head,7);
	insertNode(head,8);
	display(head);
	addcycle(head,5);
	detectcycle(head);
	return 0;
}