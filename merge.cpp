#include<iostream>
using namespace std;

int b[100];
void merge(int a[],int lb,int mid,int ub)
{
	int i=lb;
	int j=mid+1;
	int k=0;
	while(i<=mid && j<=ub)
	{
		if(a[i]>=a[j])
		{
			b[k]=a[j];
			j++;
		}
		else
		{
			b[k]=a[i];
			i++;
		}
		k++;
	}
	while(j<=ub)
	{
		b[k]=a[j];
		k++;j++;
	}
	while(i<=mid)
	{
		b[k]=a[i];
		i++;k++;
	}
	
}
void mergesort(int a[],int lb,int ub)
{
	if(lb<ub)
	{
		int mid=(lb+ub)/2;
		mergesort(a,lb,mid);
		mergesort(a,mid+1,ub);
		merge(a,lb,mid,ub);
	}
}
int main()
{
	int a[]={8,7,6,5,4,3,2,1};
	int n=sizeof(a)/sizeof(a[0]);
	mergesort(a,0,n-1);
	for(int i=0;i<n;i++)
	{
		cout<<b[i]<<" ";
	}
	return 0;
}