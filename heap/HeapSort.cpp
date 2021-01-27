#include<iostream>
#include<math.h>
using namespace std;
int arr[]={12,23,12,10,13,5};
void heapify(int index,int n)
{
	int left=(2*index)+1;
	int right=(2*index)+2;
	int largest=index;
	if(left < n && arr[largest] < arr[left])
		largest=left;
	if(right < n && arr[largest] < arr[right])
		largest=right;
	if(largest!=index)
	{
		swap(arr[largest],arr[index]);
		heapify(largest,n);
	}
}
void show()
{
	for(int i=0;i<6;i++)
	{
		cout<<arr[i]<<" ";
	}
	cout<<endl;
}
void buildheap(int n)
{
	int startidx=floor(n-1/2);
	for(int i=startidx;i>=0;i--)
	{
		heapify(i,n);
		cout<<arr[0]<<" "<<arr[n-1]<<endl;
		swap(arr[0],arr[n-1]);
		n--;
		buildheap(n);
	}
}
int main()
{
	
	int n=sizeof(arr)/sizeof(arr[0]);
	buildheap(n);
	return 0;
}