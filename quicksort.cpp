#include<iostream>
using namespace std;  

int partition(int a[],int lb,int ub)
{
	int start=lb;
	int pivot=a[lb];
	int end=ub;
	while(start<end)
	{
		while(a[start]<=pivot)
		{
			start++;
		}
		while(a[end]>pivot)
		{
			end--;
		}
		if(start<end)
		{
			int temp=a[start];
			a[start]=a[end];
			a[end]=temp;
		}
	}
	int temp=a[end];
	a[end]=a[lb];
	a[lb]=temp;
	return end;
}
void qsort(int a[],int lb,int ub)
{
	int loc;
	if(lb<ub)
	{
		loc=partition(a,lb,ub);
		qsort(a,lb,loc-1);
		qsort(a,loc+1,ub);
	}
}
int main()
{
	int a[]={1,2,12,3,123,3,1,23};
	qsort(a,0,7);
	for(int i=0;i<8;i++)
	{
		cout<<a[i]<<" ";
	}
	return 0;
}