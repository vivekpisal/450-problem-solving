#include<iostream>
using namespace std;
void sort(int a[],int i,int n)
{
	if(i==n)
	{
		return;
	}
	for(int j=0;j<n;j++)
		if(a[j]>a[j+1])
			swap(a[j],a[j+1]);
	sort(a,i+1,n);
}
int main()
{
	int a[]={6,5,4,3,2,1};
	int n=sizeof(a)/sizeof(a[0]);
	sort(a,0,n-1);
	for(int i=0;i<n;i++)
		cout<<a[i]<<" ";
	return 0;
}