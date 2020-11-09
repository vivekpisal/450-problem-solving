#include<iostream>
using namespace std;
class ll
{
public:
	int data;
	ll *next=NULL;
	ll()
	{}
	ll(int val):data(val){}
	void show()
	{
		ll *temp=next;
		while(temp!=NULL)
		{
			cout<<temp->data<<" ";
			temp=temp->next;
		}
	}
	void reverse()
	{
		ll *prevnode,*current,*forward;
		prevnode=0;
		current=forward=next;
		while(current!=NULL)
		{
			forward=forward->next;
			current->next=prevnode;
			prevnode=current;
			current=forward;
		}
		next=prevnode;
	}
};
int main()
{
	ll *head=new ll();
	int n;
	cin>>n;
	while(n--)
	{
		ll *temp;
		int data;
		cin>>data;
		if(head==NULL)
			head=new ll(data);
		else
		{
			temp=head;
			while(temp->next!=NULL)
				temp=temp->next;
			temp->next=new ll(data);
		}
	}
	head->show();
	cout<<endl;
	head->reverse();
	head->show();
	return 0;
}