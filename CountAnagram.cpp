#include<iostream>
using namespace std;
int main()
{
	string ana="abc";
	string s="abcdefbcabc";
	int ana_sum=0,sum=0;
	for(int i=0;i<ana.size();i++)
		ana_sum+=int(ana[i]);
	cout<<ana_sum<<endl;
	for(int i=0;i<s.size();i++)
	{
		sum+=int(s[i]);
		if(i>=ana.size()-1)
		{
			sum-=int(s[i-ana.size()]);
			if(sum==ana_sum)
				cout<<i-ana.size()+1<<" "<<i<<endl;
		}
	}
	return 0;
}