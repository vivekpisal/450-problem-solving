#include <bits/stdc++.h>

using namespace std;

bool MinDiff(int arr[],int sum,int n)
{
    if(sum == 0)    return true;
    
    if(n == 0) return false;
    
    if(arr[n-1] > sum)
        return MinDiff(arr,sum,n-1);
    
    return MinDiff(arr,sum,n-1) || MinDiff(arr,sum - arr[n-1],n-1);
}


int main()
{
    int arr[]={1,6,11,5};
    int total=0;
    for(int i=0;i<4;i++)
        total+=arr[i];
    int dp[5][total+1];
    for(int i=0;i<5;i++)
    {
        for(int j=0;j<total+1;j++)
        {
            if(i == 0)
                dp[i][j]=false;
            if(j == 0)
                dp[i][j] = true;
        }
    }
    for(int i=0;i<5;i++)
    {
        for(int j=0;j<total+1;j++)
        {
            if(arr[i-1] > j)
                dp[i][j] = dp[i-1][j];
            else
                dp[i][j] = dp[i-1][j] || dp[i-1][j - arr[i-1]];
        }
    }
    int m = INT_MAX;
    for(int i=0;i<=total/2;i++)
            if(dp[4][i])
                m=min(m,total - 2*i);
    cout<<m;
    return 0;
}
