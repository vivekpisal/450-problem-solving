//https://leetcode.com/discuss/general-discussion/1083445/how-quick-sort-works-and-the-problems-that-can-be-solved-using-partition-logic
#include<bits/stdc++.h>
using namespace std;

int main()
{
	vector<int> wt={1,3,4,5};
	vector<int> val={1,4,5,2};
	int w=7;
	int dp[wt.size()+1][w+1];
	for(int i=0;i<=wt.size();i++)
	{
		for(int j=0;j<=w;j++)
		{
			if (i == 0 || j == 0)
                dp[i][j] = 0;
			else if(wt[i-1] <= j)
				dp[i][j] = max(val[i-1] + dp[i-1][j - wt[i-1]] , dp[i-1][j]);
			else
				dp[i][j] = dp[i-1][j];
		}
	}
	cout<<dp[wt.size()][w]<<endl;
	for(int i=0;i<=wt.size();i++)
	{
		for(int j=0;j<=w;j++)
		{
			cout<<dp[i][j]<<" ";
		}
		cout<<endl;
	}	
	return 0;
}