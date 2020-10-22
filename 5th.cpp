#include<iostream>
#include<vector>
using namespace std;  // namespace 

int main()
{
	vector<int> a={1,1,-2,-1,-2,-3,-3,-4,-2,-1,-10,1,3};
	int start=0,end=a.size()-1,temp;
	for(int i=0;i<a.size()/2;i++)
	{
		if(a[start]<0)
			{start++;}
		if(a[end]<0)
		{
			temp=a[end];
			a[end]=a[start];
			a[start]=temp;
			
		}
		end--;
	}
	for(int i=0;i<a.size();i++)
	{
		cout<<a[i]<<" ";
	}
	return 0;
}