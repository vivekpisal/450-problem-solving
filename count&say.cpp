#include<iostream>
#include<vector>
using namespace std;

int hash1(char s)
{
	int hash;
	hash=int(s)-48;
	return hash;
}


int main()
{
	string s="3322251";
	int a[9]={0};
	vector<int> ans;
	for(int i=0;i<s.length();i++)
	{
		a[hash1(s[i])]=a[hash1(s[i])]+1;
	}
	for(int i=0;i<s.length();i++)
	{
		ans.push_back(a[hash1(s[i])]);
		ans.push_back(hash1(s[i]));
		while(s[i]==s[i+1])
			i++;
	}
	for(int i=0;i<ans.size();i++)
		cout<<ans[i];
	return 0;
}