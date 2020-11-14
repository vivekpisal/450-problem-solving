#include<iostream>
#include<cstdlib>
#include<vector>
using namespace std; 
int binary(vector<int> a,int low,int high,int k)
{
	while(low<=high)
	{
		int mid=(low+high)/2;
		if(a[mid]==k)
			return a[mid];
		else if(a[mid]>k)
			high=mid-1;
		else if(a[mid]<k)
			low=mid+1;
	}
	return abs(a[low]-k)>abs(a[high]-k)?a[high]:a[low];
}
int main()
{
	vector<int> a={1,3,8,10,15};
	int k=6;
	cout<<binary(a,0,a.size()-1,k);
	return 0;
}