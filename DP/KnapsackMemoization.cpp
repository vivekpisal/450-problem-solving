#include<bits/stdc++.h>
using namespace std;

int knapsack(int wt[],int profit[],int w,int n)
{
	int result;
	int pr[n][w]={-1};
	if(n == 0 || w == 0)
		return 0;
	if(pr[n][w] != -1)
		return pr[n][w];
	if(wt[n] > w)
		result = knapsack(wt,profit,w,n-1);
	result = max(knapsack(wt,profit,w,n-1) , profit[n] + knapsack(wt,profit,w-wt[n],n-1));
	return result;
} 
int main()
{
	int wt[] = {3,4,1};
	int profit[] = {5,6,2};
	int w = 6;
	cout<<knapsack(wt,profit,w,2);
	return 0;
}