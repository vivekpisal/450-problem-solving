#include<iostream>
#include<algorithm>
#include<bits/stdc++.h>
using namespace std;
int main()
{
	int size=3;
	int a[size];
	int page,paging_fault=0,cache_head=0;
	for(int i=0;i<=INT_MAX;i++)
	{
		cin>>page;
		if(page==9)
			break;
		if(binary_search(a,a+size,page))
		{
			cout<<"found"<<endl;
		}
		else
		{
			if(cache_head==size)
			{
				int temp,temp2;
				temp=a[size-1];
				for(int j=size-1;j>=0;j--)
				{
					temp2=a[j-1];
					a[j-1]=temp;
					temp=temp2;
				}
				a[size-1]=page;
				for(int j=0;j<size;j++)
				{
					cout<<a[j]<<" ";
				}
			}
			else
			{
				a[cache_head]=page;
				cache_head++;
				paging_fault++;
			}
		}
	}
	return 0;
}