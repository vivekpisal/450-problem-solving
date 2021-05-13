#include<bits/stdc++.h>
using namespace std;

int dp[8][6];
int knapsack(vector<int> wt,vector<int> val,int w,int n)
{
	if(w == 0 || n == 0)
		return 0;
	if(dp[w][n-1]!=-1)
		return dp[w][n-1];
	if(wt[n-1] <= w)
		return dp[w][n-1]=max(val[n-1] + knapsack(wt,val,w-wt[n-1],n-1),knapsack(wt,val,w,n-1));
	else
		return dp[w][n-1]=knapsack(wt,val,w,n-1);
}
int main()
{
	vector<int> wt={1,3,4,5};
	vector<int> val={1,4,5,2};
	int w=7;
	for(int i=0;i<8;i++)
	{
		for(int j=0;j<6;j++)
			dp[i][j]=-1;
	}
	cout<<knapsack(wt,val,w,5);
	return 0;
}