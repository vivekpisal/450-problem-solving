#include<iostream>
#include<string>
using namespace std;
class node
{
public:
	int data;
	node *next;
	node(){next=NULL;}
	node(int val){data=val;next=NULL;}
	void show()
	{
		if(next==NULL)
		{
			cout<<"Linked List Is NULL";
		}
		else
		{
			node *temp=next;
			while(temp!=NULL)
			{
				cout<<temp->data<<" ";
				temp=temp->next;
			}
		}
	}
	node* addLL(node *root,node *root1)
	{
		node *head=NULL;
		int carry=0;
		while(root!=NULL && root1!=NULL)
		{
			int add;
			if(carry==0)
				add=root->data+root1->data;
			else
				{add=root->data+root1->data+carry;
				carry=0;}
			root=root->next;
			root1=root1->next;
			if(add<10)
				if(head==NULL)
					head=new node(add);
				else
				{
					node *temp=head;
					while(temp->next!=NULL)
						temp=temp->next;
					temp->next=new node(add);
				}
			else 
			{
				string str=to_string(add);
				carry=stoi(str.substr(0,1));
				int num2=stoi(str.substr(1));
				cout<<endl<<carry<<" "<<num2<<endl;
				if(head==NULL)
					head=new node(num2);
				else
				{
					node *temp=head;
					while(temp->next!=NULL)
						temp=temp->next;
					temp->next=new node(num2);
				}

			}
			
		}
		return head;
	}
};
int main()
{
	node *LL,*LL1=new node();
	int n;
	cin>>n;
	while(n--)
	{
		int data;
		cin>>data;
		if(LL->next==NULL)
			LL->next=new node(data);
		else
		{
			node *temp=LL;
			while(temp->next!=NULL)
				temp=temp->next;
			temp->next=new node(data);
		}

	}
	cin>>n;
	while(n--)
	{
		int data;
		cin>>data;
		node *first=new node();
		first->data=data;
		if(LL1->next==NULL)
			LL1->next=first;
		else
		{
			node *temp=LL1;
			while(temp->next!=NULL)
				temp=temp->next;
			temp->next=first;
		}

	}
	LL->show();
	cout<<endl;
	LL1->show();
	node *head=LL->addLL(LL,LL1);
	cout<<endl;
	head->show();
	return 0;
}