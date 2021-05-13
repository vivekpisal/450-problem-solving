#include<bits/stdc++.h>
using namespace std;

int calls =0;
int dp[11][6]={0};
/*int subset(vector<int> v,int total,int n)
{
	if(total == 0)
		return 1;
	if(n == 0)
		return 0;
	if(dp[total][n]!=0)
		return dp[total][n];
	if(v[n-1] <= total)
		{calls++;
		return dp[total][n] = subset(v,total - v[n-1],n-1) + subset(v,total,n-1);
	}
	else
		{calls++;
		return dp[total][n] = subset(v,total,n-1);}
}*/

int main(){
	vector<int> v = {2,3,5,8,10};
	//cout<<subset(v,10,5)<<endl;
	int total = 10;
	int dp[v.size()+1][total+1];
	for(int i=0;i<=v.size();i++)
	{
		for(int j=0;j<=total;j++)
		{
			if(i == 0)
				dp[i][j]=0;
			if(j == 0)
				dp[i][j]=1;
		}
	}
	for(int i=1;i<=v.size();i++)
	{
		for(int j=1;j<=total;j++)
		{
			if(v[i-1] <= j)
			{
				dp[i][j] = dp[i-1][j-v[i-1]] + dp[i-1][j];
			}
			else
				dp[i][j] = dp[i-1][j];
		}
	}
	for(int i=0;i<=v.size();i++)
	{
		for(int j=0;j<=total;j++)
		{
			cout<<dp[i][j]<<" ";
		}
		cout<<endl;
	}
	return 0;
}