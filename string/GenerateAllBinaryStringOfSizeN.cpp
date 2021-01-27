#include<bits/stdc++.h>
using namespace std; 

void bin(int n,vector<char> s)
{
	if(n < 0)
	{
		for(char i:s)
			cout<<i<<" ";
		cout<<endl;
		return;
	}
	else
	{
		s[n]='0';
		bin(n-1,s);
		s[n]='1';
		bin(n-1,s);
	}
}
int main()
{
	vector<char> s(2);
	bin(1,s);
	return 0;
}