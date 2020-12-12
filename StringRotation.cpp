#include<iostream>
using namespace std;
int main()
{
	string s1="ABCD",s2="CDAB";
	string temp=s1+s1;
	bool flag=true;
	for(int i=0;i<temp.size();i++)
	{
		if(s2==temp.substr(i,s1.size()))
		{
			flag=true;
			break;
		}
		else
		{
			flag=false;
		}
	}
	if(flag)
		cout<<"Rotation Of Each Other";
	else
		cout<<"Not Rotation Of Each Other";
	return 0;
}