#include<iostream>
#include<stack>
using namespace std;
void insertbottom(stack<int> &s,int elem)
{
	if(s.empty())
	{
		s.push(elem);
		return;
	}
	int t=s.top();
	s.pop();
	insertbottom(s,elem);
	s.push(t);
}
void reverse(stack<int> &s)
{
	if(s.empty())
	{
		return;
	}
	int temp=s.top();
	s.pop();
	reverse(s);
	insertbottom(s,temp);
}
void showstack(stack<int> &s)
{
	while(!s.empty())
	{
		cout<<s.top()<<" ";
		s.pop();

	}
}

int main()
{
	stack<int> s;
	s.push(1);
	s.push(2);
	s.push(3);
	s.push(4);
	reverse(s);
	showstack(s);
	return 0;
}