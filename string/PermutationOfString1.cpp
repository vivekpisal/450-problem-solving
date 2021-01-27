#include<iostream>
using namespace std;
void permutation(string s,int fix)
{
	if(fix == s.length())
	{
		cout<<s<<endl;
		return;
	}
	for(int i = fix;i < s.length();i++)
	{
		swap(s[fix],s[i]);
		permutation(s,fix+1);
		swap(s[fix],s[i]);
	}
}
int main()
{
	string s="abcd";
	permutation(s,0);
	return 0;
}