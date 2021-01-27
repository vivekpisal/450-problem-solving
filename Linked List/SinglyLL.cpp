#include<bits/stdc++.h>
using namespace std;
class Node{
public:
	int data;
	Node *next;
	Node(int val)
	{
		data=val;
		next=NULL;
	}
};

void insertAtTail(Node* &head,int val)
{
	Node *n=new Node(val);
	if(head==NULL)
	{
		head=n;
		return;
	}
	Node *temp=head;
	while(temp->next!=NULL)
		temp=temp->next;
	temp->next=n;
}

void display(Node* head)
{
	Node *temp=head;
	while(temp!=NULL)
	{
		cout<<temp->data<<"->";
		temp=temp->next;
	}
	cout<<"NULL"<<endl;
}

void insertAtHead(Node* &head,int val)
{
	Node *temp=head;
	Node *n=new Node(val);
	head=n;
	n->next=temp;
}

void reverse(Node* &head)
{
	Node* prev=NULL,*curr=head,*next;;
	while(curr!=NULL)
	{
		next=curr->next;
		curr->next=prev;
		prev=curr;
		curr=next;
	}
	head=prev;
}

Node* reverserecursive(Node* &head)
{
	if(head==NULL || head->next==NULL)
		return head;
	Node* newhead=reverserecursive(head);
	head->next->next=head;
	head->next=NULL;
	return newhead;
}

void deletefirst(Node* &head)
{
	Node* temp=head;
	head=head->next;
	delete temp;
}

void deletion(Node* &head,int val)
{
	if(head==NULL)
		return;
	if(head->data == val)
	{
		deletefirst(head);
		return;
	}
	Node* temp=head;
	while(temp->next->data!=val)
		temp=temp->next;
	Node* n=temp->next;
	temp->next=temp->next->next;
	delete n; 
}

int main(){
	Node *head=NULL;
	insertAtTail(head,1);
	insertAtTail(head,2);
	insertAtTail(head,3);
	insertAtTail(head,4);
	display(head);
	deletion(head,1);
	display(head);
	return 0;
}