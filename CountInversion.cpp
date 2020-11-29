#include<iostream>
#include<vector>
using namespace std;   

int main()
{
	vector<int> a;
	int n;
	cin>>n;
	int count=0;
	for(int i=0;i<n;i++)
	{
		int no;
		cin>>no;
		a.push_back(no);
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
	cout<<count<<endl;
	return 0;
}