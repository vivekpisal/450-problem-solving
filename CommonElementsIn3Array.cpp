#include<iostream>
#include<vector>
using namespace std;  

bool bsearch(vector<int> a,int lb,int ub,int ser)
{	
	int mid=(ub+lb)/2;
	while(lb<=ub)
	{
		if(a[mid]==ser)
		{
			return true;
		}
		else if(a[mid]>ser)
		{
			ub=mid-1;
			mid=(lb+ub)/2;
		}
		else if(a[mid]<ser)
		{
			lb=mid+1;
			mid=(lb+ub)/2;
		}
	}
	return false;
}


int main()
{
	vector<int> A = {1, 5, 10, 20, 40, 80};
	vector<int> B = {6, 7, 20, 80, 100};
	vector<int> C = {3, 4, 15, 20, 30, 70, 80, 120};
	vector<int> common;
	for(int i=0;i<A.size();i++)
	{
		if(true==bsearch(B,0,B.size()-1,A[i]))
			common.push_back(A[i]);
	}
	for(int i=0;i<common.size();i++)
	{
		if(true==bsearch(common,0,common.size()-1,common[i]))
			cout<<common[i]<<" ";
	}
	return 0;
}