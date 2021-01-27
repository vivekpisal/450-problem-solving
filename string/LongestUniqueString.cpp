#include<iostream>
#include<bits/stdc++.h>
using namespace std;
void unique_count(string s)
{
	unordered_map<char,int> map;
	int start=0;
	for(int i=0;i<s.size();i++)
	{
		if(map[s[i]])
		{
			size_t found=s.substr(0,i).find(s[i]);
			cout<<found<<endl;
			start=found+1;
		}
		else
			map[s[i]]=1;
	}
}
int main()
{
	string s="pwpwkew";
	unique_count(s);
	return 0; 
}