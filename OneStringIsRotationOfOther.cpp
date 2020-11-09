#include<iostream>
using namespace std;   

bool isrotation(string str,string str1)
{	
	if(str.length()!=str1.length())
		return false;
	string temp=str+str1;
	int a[26]={0};
	for(int i=0;i<temp.length();i++)
	{
		int hash=int(temp[i]);
		a[hash-97]=a[hash-97]+1;
	}
	for(int i=0;i<26;i++)
	{
		if(a[i]%2!=0)
			return false;
	}
	return true;
}


int main()
{
	string s="abacd",s1="cdaba";
	if (isrotation(s,s1))
		cout<<"String are rotation of each other";
	else
		cout<<"string is not rotation of each other";
	return 0;
}