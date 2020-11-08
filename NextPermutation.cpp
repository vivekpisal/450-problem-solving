#include <iostream>
using namespace std;

void reverse(int a[],int first,int last)
{
	int mid=(first+last)/2;
	for(int i=first;i<=mid;i++)
	{
		swap(a[i],a[last]);
		last--;
	}
}
int main()
{
	int a[]={2,3,4,1};
	int first,last;
	for(int i=3;i>=0;i--)
	{
		if(a[i]<a[i+1])
		{
			first=i;
			break;
		}
	}
	for(int i=3;i>=0;i--)
	{
		if(a[first]<a[i])
		{
			last=i;
			break;
		}
	}
	swap(a[first],a[last]);
	reverse(a,first,last);
	for(int i=0;i<=3;i++)
		cout<<a[i]<<" ";
	return 0;
}