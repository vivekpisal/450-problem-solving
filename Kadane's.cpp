#include<iostream>
using namespace std;

int main()
{
	int a[]={1,2,3,-2,5};
	int max_so_far=0,max_end=0;
	for(int i=0;i<5;i++)
	{
		max_end=max_end+a[i];
		if(max_end>max_so_far)
		{
			max_so_far=max_end;
		}
		if(max_end<0)
		{
			max_end=0;
		}
	}
	cout<<max_so_far;
	return 0;
}