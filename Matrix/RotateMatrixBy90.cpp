#include<bits/stdc++.h>
using namespace std;
int main()
{
	//Space Complexity = O(n^2)
	//Time Complextiy = O(n^2)
	/*
	vector<vector<int>> mat={{1,2,3},{4,5,6},{7,8,9}},temp;
	for(int i=mat[0].size()-1;i>=0;i--)
	{
		vector<int> temp1;
		for(int j=mat.size()-1;j>=0;j--)
		{
			temp1.push_back(mat[j][i]);
		}
		temp.push_back(temp1);
	}
	int j=0;
	for(int i=mat.size()-1;i>=0;i--)
	{
		mat[i]=temp[j];
		j++;
	}
	for(int i=0;i<mat.size();i++)
	{
		for(int j=0;j<mat[i].size();j++)
			cout<<mat[i][j]<<" ";
		cout<<endl;
	}*/
	//Space Complexity :- 
	vector<vector<int>> mat={{1,2,3,4},{5,6,7,8},{9,10,11,12},{13,14,15,16}};
	for(int i=0;i<mat.size();i++)
	{
		for(int j=i+1;j<mat[0].size();j++)
		{
			swap(mat[i][j],mat[j][i]);
		}
	}
	for(int i=0;i<mat.size();i++)
	{
		for(int j=0;j<mat[i].size();j++)
			cout<<mat[i][j]<<" ";
		cout<<endl;
	}
	return 0;
}