#include<iostream>
#include<string.h>
using namespace std;
int main()
{
	string s="geeky";
	for(int i=0;i<=s.length();i++)
	{
		for(int j=1;j<=s.length()-i;j++)
		{
			cout<<s.substr(i,j)<<endl;
		}
	}
	//2nd Method Generate from previous substring
	/*for(int i=0;i<s.length();i++)
	{
		char temp[s.length()-i+1];
		char tempp=0; 
		for(int j=i;j<=s.length();j++)
		{
			temp[tempp++]=s[j];
			temp[tempp]='\0';
			cout<<temp<<endl;
		}
	}*/
	return 0;
}