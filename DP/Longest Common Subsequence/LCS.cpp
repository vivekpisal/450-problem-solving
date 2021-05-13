#include<bits/stdc++.h>
using namespace std;

int count=0;
int LCS(string a,string b,int m,int n)
{
	if(n == 0 || m == 0) return 0;

	if(a[m] == b[n])
		return 1 + LCS(a,b,m-1,n-1);

	return max(LCS(a,b,m-1,n),LCS(a,b,m,n-1));
}


int main()
{
	string a="abcde";
	string b="abgcf";
	//cout<<LCS(a,b,a.size(),b.size());
	int dp[a.size()+1][b.size()+1];
	for(int i=0;i<=a.size();i++)
	{
		for(int j=0;j<=b.size();j++)
		{
			if(i == 0 || j == 0)
				dp[i][j]=0;
		}
	}
	for(int i=1;i<=a.size();i++)
	{
		for(int j=1;j<=b.size();j++)
		{
			if(a[i] == b[j])
				dp[i][j]=1+dp[i-1][j-1];
			else
				dp[i][j]=max(dp[i-1][j],dp[i][j-1]);
		}
	}
		cout<<dp[a.size()][b.size()];
	return 0;
}