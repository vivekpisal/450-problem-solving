#include<bits/stdc++.h>
using namespace std;
int main()
{
	string a="aba";
	string b="ababaa";
	string s=a+"$"+b;
	vector<int> v;
	v.push_back(0);
	for(int i=1;i<s.size();i++)
	{
		int k=i;
		int count=0;
		for(int j=0;j<a.size();j++)
		{
			if(s[j]==s[k])
			{
				k++;
				count++;
			}
			else
				break;
		}
		v.push_back(count);
		count=0;
	}
	for(int i=0;i<v.size();i++)
	{
		if(v[i]==a.size())
			cout<<"found"<<endl;
		else
			cout<<v[i]<<endl;
	}
	return 0;
}