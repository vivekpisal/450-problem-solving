#include<bits/stdc++.h>
using namespace std;

int TargetSum(int arr[],int s1,int sum,int n)
{
	if(sum - (2*s1) == 1)
		return 1;
	
	if(n == 0)
		return 0;

	return TargetSum(arr,s1,sum,n-1) + TargetSum(arr,s1 + arr[n-1],sum,n-1);
}

int main()
{
	int arr[]={1,1,2,3};
	int total=0;
	for(int i=0;i<4;i++)
		total+=arr[i];
	cout<<TargetSum(arr,0,total,4);
	return 0;
}