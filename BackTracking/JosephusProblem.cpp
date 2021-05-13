#include<bits/stdc++.h>
using namespace std;

void Josephus(vector<int> &v,int k,int count,int loc)
{
	if(v.size() == 1)
		return;

	if(loc > v.size()-1)
		loc=0;

	if(count == k)
	{
		v.erase(v.begin()+loc);
		count=0;
		loc--;
	}

	Josephus(v,k,count+1,loc+1);
}
int main()
{
	int n=7,k=3;
	vector<int> v;
	for(int i=0;i<n;i++)
		v.push_back(i);
	Josephus(v,k,1,0);
	cout<<v.size()<<endl;
	cout<<v[0];
	return 0;
}