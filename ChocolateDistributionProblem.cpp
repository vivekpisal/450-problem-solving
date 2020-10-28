#include<iostream>
using namespace std;

int partition(int a[],int lb,int ub)
{
	int start=lb;
	int end=ub;
	int pivot=a[lb];
	while(start<end)
	{
		while(a[start]<=pivot)
			{start++;}
		while(a[end]>pivot)
			{end--;}
		if(start<end)
		{
			int temp=a[end];
			a[end]=a[start];
			a[start]=temp;
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
	int a[]={7, 3, 2, 4, 9, 12, 56};
	int students=3;
	int n=sizeof(a)/sizeof(a[0]);
	qsort(a,0,n-1);
	int min=a[0+students-1]-a[0],sum=0;
	for(int i=0;i<n-5;i++)
	{
		sum=a[i+students-1]-a[i];
		if(min>sum)
			min=sum;
		sum=0;
	}
	cout<<min<<" ";
	return 0;
}