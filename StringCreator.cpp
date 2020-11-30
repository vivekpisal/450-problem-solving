#include<iostream>
#include<algorithm>
using namespace std;

int countFreq(string &str,string ser)
{
	int s=ser.size();
	int freq=0;
	for(int i=0;i<str.size();i++)
	{
		if(str.substr(i,s)==ser)
			freq+=1;
	}
	return freq;
}
int main()
{
	string s="abab",s1="ababab";
	int size_s=s.size(),size_s1=s1.size();
	for(int i=0;i<s.size();i++)
	{
		for(int j=i;j<s.size();j++)
		{
			int c=countFreq(s,s.substr(i,j));
			int c1=countFreq(s1,s.substr(i,j));
			if(c*(j-i)==size_s && c1*(j-i)==size_s1)
			{
				cout<<s.substr(i,j)<<" "<<c<<" "<<c1;
			}
		}
	}
	return 0;
}