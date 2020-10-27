#include<iostream>
#include<math.h>
using namespace std;

int hash1(string s)
{
	int sum=0;
	for(int i=0;i<s.length();i++)
	{
		sum=sum+pow(int(s[i]),i);
	}
	return sum;
}


int main()
{
	string s="1010111";
	string sub="101";
	int sub_hash=hash1(sub);
	for(int i=0;i<s.length();i++)
	{
		int s_hash=hash1(s.substr(i,i+3));
		if(sub_hash==s_hash)
		{
			cout<<"found"<<i<<" "<<i+3;
			break;
		}
	}
	return 0;
}