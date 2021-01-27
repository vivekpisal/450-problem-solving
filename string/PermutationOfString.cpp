#include<bits/stdc++.h>
using namespace std;
void permutation(string s,string op)
{
	if(s.length() == 0)
	{
		cout<<op<<" "<<endl;
		return;
	}
	permutation(s.substr(1),op);
	permutation(s.substr(1),op + s[0]);
}
int main()
{
	string s="abc";
	permutation(s,"");
	return 0;
}