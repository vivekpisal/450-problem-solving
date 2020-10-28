#include<iostream>
using namespace std;

string palin(string s)
{
	int end=s.length()-1;
	for(int start=0;start<s.length()/2;start++,end--)
	{
		int temp=s[start];
		s[start]=s[end];
		s[end]=temp;
	}
	return s;
}

 
int main()
{
	string S;
	cin>>S;
	if(palin(S)==S)
	{
		cout<<"String is palindrome";
	}
	else
	{
		cout<<"The string is not palindrome";
	}
	return 0;
}