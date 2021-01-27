#include<bits/stdc++.h>
using namespace std;
class node
{
public:
	int data;
	node* next;
	node(int val)
	{
		data=val;
		next=NULL;
	}
};
void insert(node* &head,int val)
{
	node* n=new node(val);
	if(head == NULL)
	{
		head=n;
		return;
	}
	node* temp=head;
	while(temp->next != NULL)
		temp=temp->next;
	temp->next=n;
}

void display(node* head)
{
	node* temp=head;
	while(temp != NULL)
	{
		cout<<temp->data<<"->";
		temp=temp->next;
	}
	cout<<"NULL"<<endl;
}

node* ReverseKNodes(node* &head,int k)
{
	node* curr=head;
	node* prev=NULL;
	node* next=NULL;
	int count=0;
	while(curr != NULL && count < k)
	{
		next=curr->next;
		curr->next=prev;
		prev=curr;
		curr=next;
		count++;
	}
	if(next != NULL)
		head->next=ReverseKNodes(next,k);
	return prev;
}

int main()
{
	node* head=NULL;
	insert(head,1);
	insert(head,2);
	insert(head,3);
	insert(head,4);
	insert(head,5);
	insert(head,6);
	display(head);
	head=ReverseKNodes(head,2);
	display(head);
	return 0;
}