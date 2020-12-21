#include<iostream>
using namespace std;
int hash1(string s)
{
	int hash=0;
	for(int i=0;i<s.size();i++)
		hash+=int(s[i])*10;
	return hash;
}
int main()
{

	string s="forxxorfxdofr";
	string sub="for";
	int sub_hash=hash1(sub),count=0;
	//FIRST METHOD
	/*
	for(int i=0;i<s.size();i++)
	{	
		if(sub_hash == hash1(s.substr(i,sub.size())))
		{
			cout<<s.substr(i,sub.size())<<endl;
			count++;
		}
	}*/
	//SECOND METHOD
	int hash=0;
	for(int i=0;i<s.size();i++)
	{
		if(i < sub.size()-1)
			hash+=int(s[i])*10;
		else if(i == sub.size()-1)
		{
			hash+=int(s[i])*10;
			if(sub_hash == hash)
			{
				cout<<s.substr(i-2,sub.size())<<endl;
				count++;
			}
		}
		else if(i > sub.size()-1)
		{
			hash+=int(s[i])*10;
			hash-=int(s[i-sub.size()])*10;
			if(sub_hash == hash)
			{
				cout<<s.substr(i-2,sub.size())<<endl;
				count++;
			}
		}
	}
	cout<<count<<endl;
	return 0;
}