#include<bits/stdc++.h>
using namespace std;
int main()
{
	vector<int> v = {1,4,4,5,1};
	for(int i=0;i<v.size();i++)
	{
		if(i+1!=v[i])
		{
			while(i!=v[i]-1 && v[i]!=v[v[i]-1])
				swap(v[i],v[v[i]-1]);
		}
	}
	for(int i=0;i<v.size();i++)
		cout<<v[i]<<" ";
	cout<<endl;
	for(int i=0;i<v.size();i++)
	{
		if(v[i]-1 == i)
		{}
		else
		{
			cout<<"Missing "<<i+1<<endl;
		}
	}
	return 0;
}