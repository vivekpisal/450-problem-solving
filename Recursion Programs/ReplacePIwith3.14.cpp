#include<iostream>
using namespace std;
void Replacepi(string str)
{
	if(str.length()==0)
		return;
	if(str[0]=='p' && str[1]=='i')
	{
		cout<<"3.14";
		Replacepi(str.substr(2));
	}
	else
	{
		cout<<str[0];
		Replacepi(str.substr(1));
	}
}
int main()
{
	Replacepi("pipiiiipppii");
	return 0;
}