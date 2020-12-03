#include<iostream>
#include<bits/stdc++.h>
using namespace std;

int gethash(string s)
{
	int sum=0;
	for(auto i:s)
	{
		sum+=int(i);
	}
	return sum;
}
int main()
{
	vector<string> s={"eat","tea","tan","ate","nat","bat"};
	map<int,vector<string>> anagram;
	for(int i=0;i<s.size();i++)
	{
		int hash=gethash(s[i]);
		anagram[hash].push_back(s[i]);
	}
	for(auto i:anagram)
	{
		for(auto j:i.second)
			cout<<j<<" ";
		cout<<endl;
	}
	return 0;
}