#include<bits/stdc++.h>
using namespace std;
class node{
public:
	int data;
	node* next;
	node(int val)
	{
		data=val;
		next=NULL;
	}
};

void insertAtHead(node* &head,int val)
{
	node* n=new node(val);
	n->next=head;
	head=n;
}

void insert(node* &head,int val)
{
	if(head == NULL)
		insertAtHead(head,val);
	else
	{
		node* n=new node(val);
		node* temp=head;
		while(temp->next != NULL)
			temp=temp->next;
		temp->next=n;
	}
}

void display(node* head)
{
	if(head == NULL)
		cout<<"LL is empty";
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

void  RemoveLastKNode(node* &head,int k)
{
	int n=0;
	if(head == NULL)
		n=0;
	else
	{
		int count=1;
		node* fast=head;
		while(fast!=NULL && fast->next != NULL  && fast->next->next != NULL)
		{
			fast=fast->next->next;
			count++;
		}
		if(fast == NULL || fast->next == NULL)
			n=count*2-1;
		else if(fast->next->next == NULL)
			n=count*2;
		int d=n-k;
		count=1;
		fast=head;
		while(count <= d)
		{
			fast=fast->next;
			count++;
		}
		if(fast->next == NULL)
			fast=NULL;
		else
			fast->next=fast->next->next;
	}

}

int main()
{
	node* head=NULL;
	insert(head,1);
	insert(head,2);
	insert(head,6);
	display(head);
	RemoveLastKNode(head,1);
	display(head);
	return 0;
}