#include<iostream>
#include<bits/stdc++.h>
using namespace std;
void bubbleup(vector<int> &nums)
{
	nums.push_back(55);
	int n=nums.size()-1;
	int i=n;
	while(i >= 0)
	{
		int parent=floor(i/2);
		if(nums[parent] < nums[i])
		{
			swap(nums[parent],nums[i]);
		
		}
		i--;
		
	}
}
void show(vector<int> nums)
{
	for(int  i=0;i<nums.size();i++)
		cout<<nums[i]<<" ";
}
int main()
{
	vector<int> nums={50,40,42,30,20};
	bubbleup(nums);
	show(nums);
	return 0;
}