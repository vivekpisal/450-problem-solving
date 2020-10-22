#include<iostream>
#include<algorithm>
using namespace std;

bool bsearch(int a[],int start,int end,int ser)
{
	int mid=(start+end)/2;
	while(start>end)
	{
		if(a[mid]==ser)
		{
			return true;
		}
		else if(a[mid]>ser)
		{
			end=start-1;
			mid=(start+end)/2;
		}
		else if(a[mid]<ser)
		{
			start=end+1;
			mid=(start+end)/2;
		}
	}
	return false;
}


int main()
{
	int nums[]={1,3,4,2,2};
	for(int i=0;i<5;i++)
	{
		if(bsearch(nums,i+1,4,nums[i]))
		{
			cout<<nums[i]<<" ";
		}
	}
	return 0;
}