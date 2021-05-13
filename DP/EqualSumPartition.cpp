#include<bits/stdc++.h>
using namespace std;

bool equal_partition(int arr[],int sum,int sum1,int sum2,int n)
{
	if(n == 0)
	{
		if(sum1 == sum2)
			return true;
		else
			return false;
	}

	return equal_partition(arr,sum,sum1+arr[n-1],sum2,n-1) || equal_partition(arr,sum,sum1,sum2+arr[n-1],n-1);
}
int main()
{
	int arr[]={5,11,5,2};
	int sum = 0;
	for(int i=0;i<4;i++)
	{
		sum+=arr[i];
	}
	cout<<equal_partition(arr,sum,0,0,4);
	return 0;
}