#include<iostream>
using namespace std;

int main()
{
	int a[]={-4,-3,3,4,-7,-2,-4,-5};
	int start=0;
	int n=sizeof(a)/sizeof(a[0]),end=n-1,temp;
	for(int i=0;i<n/2;i++)
	{
		if(a[end]<0)
		{
			if(a[start]<0)
			{
				start++;
				continue;
			}
			temp=a[end];
			a[end]=a[start];
			a[start]=temp;
			start++;
			end--;
		}
	}
	for(int i=0;i<n;i++)
	{
		cout<<a[i]<<" ";
	}
	return 0;
}