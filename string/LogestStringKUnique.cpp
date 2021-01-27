#include<bits/stdc++.h>
using namespace std; 
int main()
{
	map<char,int> map;
	string s="abacda";
	int i=0;
	int start=0;
	int end=0;
	int size=0;
	for(int j=0;j < s.size();j++)
	{
		if(map[s[j]])
			map[s[j]]++;
		else
			map[s[j]]=1;
		if(map.size() == 3) 
		{
			if(j-i+1 > size)
			{
				size=j-i+1;
				start=i;
				end=j;
			}
			for(auto temp:map)
				cout<<temp.first<<" "<<temp.second<<" ";
			cout<<s.substr(start,end-start+1);
			cout<<endl;
		}
		if(map.size() > 3)
		{
			while(map.size() > 3)
			{
				map[s[i]]--;
				if(map[s[i]] == 0)
					map.erase(s[i]);
				i++;
			}
		}
	}
	cout<<s.substr(start,end-start+1);
	return 0;
}