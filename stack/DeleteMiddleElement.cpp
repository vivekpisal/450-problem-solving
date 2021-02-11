#include<bits/stdc++.h>
using namespace std;
void RecursiveD(stack<int> &s,int k)
{
	if(s.size() == k)
	{
		s.pop();
		return;
	}
	int top = s.top();
	s.pop();
	RecursiveD(s,k);
	s.push(top);
}
int main()
{
	stack<int> s;
	s.push(1);
	s.push(2);
	s.push(3);
	s.push(4);
	s.push(5);
	vector<int> v;
	RecursiveD(s,s.size()/2+1);
	while(s.size() > 0)
	{
		cout<<s.top()<<" ";
		s.pop();
	}
	return 0;
}