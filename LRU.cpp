#include<iostream>
#include<algorithm>
#include<bits/stdc++.h>
using namespace std;
class node
{
public:
	int data;
	node *next=nullptr;
	node *back=nullptr;
	node(int data):data{data}{}
	node(){}
};
void show(node *temp)
{
	while(temp!=NULL)
	{
		cout<<temp->data<<" ";
		temp=temp->next;
	}
	cout<<endl;
}
int main()
{
	//FIRST APPROACH
	/*
	int size=3;
	int a[size];
	int page,paging_fault=0,cache_head=0;
	for(int i=0;i<=INT_MAX;i++)
	{
		cin>>page;
		if(page==9)
			break;
		if(binary_search(a,a+size,page))
		{
			cout<<"found"<<endl;
		}
		else
		{
			if(cache_head==size)
			{
				int temp,temp2;
				temp=a[size-1];
				for(int j=size-1;j>=0;j--)
				{
					temp2=a[j-1];
					a[j-1]=temp;
					temp=temp2;
				}
				a[size-1]=page;
				for(int j=0;j<size;j++)
				{
					cout<<a[j]<<" ";
				}
			}
			else
			{
				a[cache_head]=page;
				cache_head++;
				paging_fault++;
			}
		}
	}*/
	/* SECOND APRAOCH
	Optimized the right shift using doubly linked list.
	*/
	node *front=NULL,*rear=front;
	int page,size=3,count_size=0;
	while(1)
	{
		cin>>page;
		if(page==10)
			break;
		if(count_size<3)
		{
			node *newnode=new node(page);
			if(front==NULL)
			{
				front=newnode;
				newnode->back=front;
				newnode->next=NULL;
				count_size++;
			}
			else
			{
				node *temp=front;
				newnode->next=temp;
				temp->back=newnode;
				front=newnode;
				newnode->back=front;
				count_size++;
			}
			if(count_size==2)
				rear=front->next;
		}
		else
		{
			node *temp=front;
			bool flag=false;
			while(temp!=NULL)
			{
				if(temp->data==page)
				{
					flag=true;
					cout<<"found\n";
					break;
				}
				else
					flag=false;
				temp=temp->next;
			}
			if(flag==false)
			{
				cout<<"not";
				node *temp=front;
				node *newnode=new node(page);
				front=newnode;
				newnode->back=front;
				newnode->next=temp;
				temp=rear->back;
				delete rear;
				rear=temp;
			}
		}
		show(front);
	}
	show(front);
	return 0;
}
