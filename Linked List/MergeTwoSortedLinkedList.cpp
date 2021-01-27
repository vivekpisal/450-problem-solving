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

void addNode(node* &head,int data)
{
	if(head == NULL)
		head = new node(data);
	else
	{
		node* temp=head;
		while(temp->next!=NULL)
			temp=temp->next;
		temp->next=new node(data);
	}
}

node* mergeList(node* head1,node* head2)
{
	node* dummynode=new node(-1);
	node* p3=dummynode;
	node* p1=head1;
	node* p2=head2;
	while(p1!=NULL && p2!=NULL)
	{
		if(p1->data < p2->data)
		{
			p3->next=p1;
			p1=p1->next;
		}
		else
		{
			p3->next=p2;
			p2=p2->next;
		}
		p3=p3->next;
	}
	while(p1!=NULL)
	{
		p3->next=p1;
		p1=p1->next;
	}
	while(p2!=NULL)
	{
		p3->next=p2;
		p2=p2->next;
	}
	return dummynode->next;
}

void show(node* head)
{
	if(head == NULL)
		return ;
	node* temp=head;
	while(temp!=NULL)
	{
		cout<<temp->data<<" ";
		temp=temp->next;
	}
	cout<<endl;
}

int main()
{
	node* head1=NULL,*head2=NULL;
	int arr[]={1,3,5,7},arr1[]={2,4,6};
	for(int i=0;i<4;i++)
		addNode(head1,arr[i]);
	for(int i=0;i<3;i++)
		addNode(head2,arr1[i]);
	show(head1);
	show(head2);
	node* newnode = mergeList(head1,head2);
	show(newnode);
	return 0;
}