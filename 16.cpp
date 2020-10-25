#include<iostream>
#include<vector>
using namespace std;

int main()
{
	vector<vector<int>> m;
	int n;
	int t;
	cin>>t;
	while(t--)
	{	
		cin>>n;
		int a[n];
		int count=0;
		for(int i=0;i<n;i++)
		{
			cin>>a[i];
		}
		for(int i=0;i<n;i++)
		{
			for(int j=i+1;j<n;j++)
			{
				if(a[i]>a[j])
				{
					count++;
				}
			}
		}
		cout<<count;
	}
	return 0;
}