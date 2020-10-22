#include<iostream>
#include<vector>
using namespace std; 

int main()
{
	int t;
	cin>>t;
	while(t)
	{
		int i;
		int n;
		cin>>n;
		int v[n];
		for(int j=0;j<n;j++)
		{
			cin>>v[j];
		}
		int temp=v[0],temp2;
		int last=v[n-1];
		for(i=0;i<n-1;i++)
		{
			temp2=v[i+1];
			v[i+1]=temp;
			temp=temp2;
		}
		v[0]=last;
		for(i=0;i<n;i++)
		{
			cout<<v[i]<<" ";
		}
	t--;
}
	return 0;
}