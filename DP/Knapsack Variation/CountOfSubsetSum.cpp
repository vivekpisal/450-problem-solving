#include<bits/stdc++.h>
using namespace std;

int CountSubset(vector<int> arr,int sum,int n)
{
    if(sum == 0)
        return 1;
    if(n == 0)
        return 0;
        
    if(arr[n-1] > sum)
        return CountSubset(arr,sum,n-1);
    
    return CountSubset(arr,sum,n-1) + CountSubset(arr,sum - arr[n-1],n-1);
}


int main()
{
    vector<int> arr={2,3,5,6,8,10};
    int sum = 10;
    //cout<<CountSubset(arr,sum,arr.size());
    int dp[arr.size()+1][sum+1];
    for(int i=0;i<arr.size()+1;i++)
    {
        for(int j=0;j<sum+1;j++)
        {
            if(i == 0)
                dp[i][j]=0;
            if(j == 0)
                dp[i][j]=1;
        }
    }
    for(int i=1;i<arr.size()+1;i++)
    {
        for(int j=1;j<sum+1;j++)
        {
            if(j < arr[i-1])
                dp[i][j] = dp[i-1][j];
            else
                dp[i][j] = dp[i-1][j] + dp[i-1][j-arr[i-1]];
        }
    }
    for(int i=0;i<arr.size()+1;i++)
    {
        for(int j=0;j<sum+1;j++)
        {
            cout<<dp[i][j]<<" ";
        }
        cout<<endl;
    }
    return 0;
}