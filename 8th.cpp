#include<iostream>
using namespace std;

int main()
{

	int a[] = {-2, -3, 4, -1, -2, 1, 5, -3};
	//KADANE'S Algo
	int max_so_far=0;
	int max_end=0;
	int size=sizeof(a)/sizeof(a[0]);
	int start=0,end=0;
	for(int i=0;i<size;i++)
	{
		max_end=max_end+a[i];
		if(max_so_far<max_end)
		{
			max_so_far=max_end;
		}
		if(max_end<0)
		{
			max_end=0;
		}
	}
	cout<<max_so_far;/*
	int max=0,max_end=0;
	int size=sizeof(a)/sizeof(a[0]);
	for(int i=0;i<size;i++)
	{
		for(int j=i+1;j<=size;j++)
		{
			for(int k=i;k<=j;k++)
			{
				max_end=max_end+a[k];
			}
			if(max_end>max)
			{
				max=max_end;
			}
			max_end=0;
		}
		
			
	}
	cout<<max;*/
	return 0;
}