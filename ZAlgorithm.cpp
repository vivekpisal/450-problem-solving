#include<iostream>
#include<vector>
using namespace std;
int main()
{
	string pat="aba",find="ababaa";
	vector<int> Z;
	Z.push_back(0);
	string s=pat+"$"+find;
	for(int i=1;i<s.size();i++)
	{
		int count=0;
		int k=i;
		for(int j=0;j<pat.size();j++)
		{
			if(s[j]==s[k])
			{
				k++;
				count++;
			}
			else
				break;
		}
		Z.push_back(count);
		count=0;
	}
	for(int i=0;i<Z.size();i++)
	{
		if(Z[i]==pat.length())
		{
			cout<<i-pat.length()-1;
		}
	}
	return 0;
}