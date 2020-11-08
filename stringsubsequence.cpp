#include <iostream>
#include<string.h>
using namespace std;
void subsequence(string str,int first,int last)
{
	if(first==last)
		return;
	cout<<str.substr(first,last)<<endl;
	subsequence(str,first+1,last);
	subsequence(str,first,last-1);
}

int main()
{
	string str="abc";
	subsequence(str,0,str.length());
	return 0;
}