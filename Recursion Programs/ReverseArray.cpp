#include<iostream>
using namespace std; 
void show(int a[],int i,int j)
{
	if(i>=j)
	{
		return;
	}
	swap(a[i],a[j]);
	show(a,i+1,j-1);
}
int main()
{
	int a[]={1,2,3,4,5,6,7};
	int n=sizeof(a)/sizeof(a[0]);
	show(a,0,n-1);
	for(int i=0;i<n;i++)
		cout<<a[i]<<" ";
	return 0;
}