#include<bits/stdc++.h>
using namespace std;

int knapsack(int wt[],int profit[],int w,int n)
{
	if(n == 0 || w == 0)
		return 0;
	if(wt[n] > w)
		return knapsack(wt,profit,w,n-1);
	return max( knapsack(wt,profit,w,n-1) , profit[n] + knapsack(wt,profit,w-wt[n],n-1));
}

int main()
{
	int wt[] = {3,4,1};
	int profit[] = {5,6,2};
	int w = 6;
	cout<<knapsack(wt,profit,w,2);
	return 0;
}