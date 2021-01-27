#include<bits/stdc++.h>
using namespace std;
vector<string> ans;
void expand(string s,int left,int right)
{
	int L=left;
	int R=right;
	while(s[R] == s[L] && L >= 0 && R < s.length())
	{
		L--;
		R++;
	}
	if(s[L+1] == s[R-1])
		ans.push_back(s.substr(L+1,R-L-1));
}
void countstring(string s)
{
	for(int i=0;i<s.size();i++)
	{
		expand(s,i,i);
		expand(s,i,i+1);
		/*
		pair<int,int> len1=expand(s,i,i);
		pair<int,int> len2=expand(s,i,i+1);
		ans.push_back(s.substr(len1.first,len1.second - len1.first+1));
		ans.push_back(s.substr(len2.first,len2.second - len2.first+1));*/
	}
	for(int i=0;i<ans.size();i++)
		cout<<ans[i]<<" ";
}
int main()
{
	string  s="aba";
	countstring(s);
	return 0;
}