#include<bits/stdc++.h>
using namespace std;
int main()
{
	string s="the sky is blue";
	string final="";
	string temp="";
	for(int i=0;i<s.size();i++)
	{
		if(s[i] == ' ' && temp == "")
			continue;
		else if(s[i] != ' ')
			temp+=s[i];
		if(s[i] == ' ' || i == s.size()-1) 
		{
			final=temp+' '+final;
			temp="";
		}
	}
	cout<<final.substr(0,final.size()-1);
	return 0;
}