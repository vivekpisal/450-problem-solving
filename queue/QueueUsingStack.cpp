#include<iostream>
#include<bits/stdc++.h>
using namespace std;
int main()
{
	stack<int> s1,s2;
	int ip,no;
	while(1)
	{
		cin>>ip;
		if(ip==1)
		{
			cout<<"Enter size";
			cin>>no;
			for(int i=0;i<no;i++)
			{
				int temp;
				cin>>temp;
				s1.push(temp);
			}
		}
		else if(ip==2)
		{
			int top;
			for(int i=0;i<s1.size();i++)
			{
				top=s1.top();
				s1.pop();
				s2.push(top);
			}
			cout<<s1.top()<<endl;
			s1.pop();
			for(int i=0;i<=s2.size();i++)
			{
				int top=s2.top();
				s2.pop();
				s1.push(top);
			}
		}
	}
	return 0;
}