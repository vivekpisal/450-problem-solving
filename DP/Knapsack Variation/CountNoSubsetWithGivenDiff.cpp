#include<bits/stdc++.h>
using namespace std;

int CountSubset(int arr[],int diff,int total,int s1,int n)
{
	if(total - (2*s1) == diff)
		return 1;

	if(n == 0)
		return 0;

	return CountSubset(arr,diff,total,s1 + arr[n-1],n-1) + CountSubset(arr,diff,total,s1,n-1);
}

int main()
{
	int arr[]={1,1,2,3};
	int total=0;
	for(int i:arr)
		total+=i;
	//cout<<CountSubset(arr,1,total,0,4);
	int dp[5][total+1];
	for(int i=0;i<5;i++)
	{
		for(int j=0;j<total+1;j++)
		{
			if(i == 0)
				dp[i][j]=0;
			if(j == 0)
				dp[i][j]=1;
		}
	}
	for(int i=1;i<5;i++)
	{
		for(int j=1;j<total+1;j++)
		{
			if(arr[i-1] > j)
				dp[i][j] = dp[i-1][j];
			else
				dp[i][j] = dp[i-1][j] + dp[i-1][j - arr[i-1]];
		}
	}
	cout<<dp[4][(total - 1)/2];
	return 0;
}