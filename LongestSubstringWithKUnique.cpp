#include<iostream>
#include<bits/stdc++.h>
using namespace std;
int main()
{
	string s="aabacfbebebe";
	int k=3;
	unordered_map<char,int> m;
	int i=0,small=0,large=0,len=INT_MIN;
	int j=0;
	for(j=0;j<s.size();j++)
	{
		if(m[s[j]])
			m[s[j]]++;
		else
			m[s[j]]=1;
		if(m.size() > k)
		{
			while(m.size() > k)
			{
				m[s[i]]--;
				if(m[s[i]] == 0)
					m.erase(s[i]);
				i++;
			}
		}
		if(m.size() == k)
		{
			len=(large-small);
			if(len < (j-i))
			{
				small=i;large=j;
			}
		}
	}
	cout<<i<<" "<<j<<endl;
	cout<<s.substr(i,j+1)<<endl;
	return 0;
}