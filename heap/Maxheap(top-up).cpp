#include<iostream>
using namespace std;

void bubbleUp(int arr[],int index)
{
	int curridx=index;
	int parentidx=(index-1)/2;
	while(arr[parentidx] < arr[curridx])
	{
		swap(arr[parentidx],arr[curridx]);
		curridx=parentidx;
		parentidx=(curridx-1)/2;
	}
}
void buildheap(int arr[],int n)
{
	for(int i=0;i<n;i++)
		bubbleUp(arr,i);
}
void printheap(int arr[],int n)
{
	for(int i=0;i<n;i++)
		cout<<arr[i]<<" ";
}
int main()
{
	int arr[]={50,40,42,80,20};
	int n=sizeof(arr)/sizeof(arr[0]);
	buildheap(arr,n);
	printheap(arr,n);
	return 0;
}