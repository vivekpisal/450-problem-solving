#include<bits/stdc++.h>
#include<iostream>
using namespace std;
void heapify(vector<int>& arr,int i)
{
	int largest=i;
	int l=(2*i)+1;
	int r=(2*i)+2;
	if(l < arr.size() && arr[l] > arr[largest])
		largest=l;
	if(r < arr.size() && arr[r] > arr[largest])
		largest=r;
	if(largest!=i)
	{
		swap(arr[largest],arr[i]);
		heapify(arr,largest);
	}
}
void buildheap(vector<int>& arr)
{
	int startidx=(arr.size()/2)-1;
	for(int i=startidx;i>=0;i--)
		heapify(arr,i);

}
int main()
{
	vector<int> arr={4,3,4,3,2};
	while(arr.size() > 1)
	{
		buildheap(arr);
		int max=arr[0];
		arr.erase(arr.begin());
		buildheap(arr);
		int secondmax=arr[0];
		arr.erase(arr.begin());
		arr.push_back(max-secondmax);
	}
	cout<<arr[0]<<" ";
	return 0;
}