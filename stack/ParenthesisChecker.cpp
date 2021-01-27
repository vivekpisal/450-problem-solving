#include<iostream>
#include<bits/stdc++.h>
using namespace std;
int main()
{
	stack<char> s;
	string expression="([)]";

	for(int i=0;i<expression.size();i++)
	{
		if(expression[i]=='{' || expression[i]=='[' || expression[i]=='(')
			s.push(expression[i]);
		if(s.top()+1 == expression[i] || s.top()+2 == expression[i])
		{
			cout<<s.top();
			cout<<expression[i];
			s.pop();
		}
	}
	cout<<s.empty();
	return 0;
}