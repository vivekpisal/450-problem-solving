#include<bits/stdc++.h>
using namespace std;

class dnode{
public:
	int data;
	dnode* next;
	dnode* prev;
	dnode(int data)
	{
		this->data=data;
		next=NULL;
		prev=NULL;
	}
};

void insertAtHead(dnode* &head,int val)
{
	dnode* n = new dnode(val);
	n->next = head;
	if(head != NULL)
	head->prev=n;
	head=n;
}

void insert(dnode* &head,int val)
{
	if(head == NULL)
	{
		insertAtHead(head,val);
		return;
	}
	dnode* n = new dnode(val);
	dnode* temp = head;
	while(temp->next != NULL)
		temp=temp->next;
	n->prev=temp->next;
	temp->next=n;
}

void display(dnode* head)
{
	if(head == NULL)
		return;
	dnode* temp = head;
	while(temp != NULL)
	{
		cout<<temp->data<<" ";
		temp=temp->next;
	}
	cout<<endl;
}

int main()
{
	dnode* head=NULL;
	insert(head,1);
	insert(head,2);
	insert(head,3);
	insert(head,4);
	insert(head,5);
	insert(head,6);
	display(head);
	return 0;
}