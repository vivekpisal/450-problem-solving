#include<bits/stdc++.h>
using namespace std;

int solve(vector<int> marks,unordered_map<char,int> mp,vector<string> words,int count,int n)
{
	if(n == 0)
		return count;
	int tempcount=0;
	for(int i=0;i<words[n-1].size();i++)
	{
		if(mp[words[n-1][i]] == 0)
		{
			for(;i>=0;i--)
			{
				tempcount-=marks[words[n-1][i]-'a'];
				mp[words[n-1][i]]+=1;
			}
			return solve(marks,mp,words,count,n-1);
		}
		mp[words[n-1][i]]-=1;
		tempcount+=marks[words[n-1][i]-'a'];
	}
	int ans1=solve(marks,mp,words,count+tempcount,n-1);
	for(int i=0;i<words[n-1].size();i++)
	{
		mp[words[n-1][i]]-=1;
		tempcount-=marks[words[n-1][i]-'a'];
	}
	int ans2=solve(marks,mp,words,count,n-1);
	return max(ans1,ans2);
}


int main()
{
	vector<int> marks={1,0,9,5,0,0,3,0,0,0,0,0,0,0,2,0,0,0,0,0,0,0,0,0,0,0};
	vector<string> words={"dog","cat","dad","good"};
	vector<char> alph={'a','b','c','d','d','d','g','o','o'};
	int n = 4;
	unordered_map<char,int> mp;
	for(int i=0;i<alph.size();i++)
	{
		if(mp.find(alph[i])!=mp.end())
			mp[alph[i]]+=1;
		else
			mp[alph[i]]=1;
	}
	cout<<solve(marks,mp,words,0,4);
	return 0;
}