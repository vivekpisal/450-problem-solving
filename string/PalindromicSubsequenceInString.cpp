#include<bits/stdc++.h>
using namespace std;
vector<string> s;

void subsequence(string ip,string op)
{
	if(ip == "")
	{
		s.push_back(op);
		return;
	}
	subsequence(ip.substr(1),op);
	subsequence(ip.substr(1),op + ip[0]);
}

bool check_palindromic(string str)
{
	int j=str.size()-1;
	int i=0;
	while(j>i)
	{
		if(str[i] == str[j])
		{}
		else
			return false;
		i++;
		j--;
	}
	return true;
}

int main()
{
	string s1 = "aaa";
	subsequence(s1,"");
	for(int i=0;i < s.size();i++)
	{
		if(check_palindromic(s[i]))
			cout<<"Palindrom "<<s[i]<<endl;
		else
			cout<<"Not Palindrom "<<s[i]<<endl;
	}
	return 0;
}