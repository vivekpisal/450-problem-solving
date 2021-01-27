#include<bits/stdc++.h>
using namespace std;
void heapify(vector<pair<int,int>> &arr,int i)
{
	int left = (2*i);
	int right = (2*i)+1;
	int largest = i;
	if(arr[left].first > arr[largest].first && left < arr.size())
		largest = left;
	if(arr[right].first > arr[largest].first && right < arr.size())
		largest = right;
	if(largest != i)
	{
		swap(arr[i],arr[largest]);
		heapify(arr,largest);
	}
}
void buildheap(vector<pair<int,int>> &arr)
{
	for(int i=(arr.size()/2);i>=0;i--)
		heapify(arr,i);
	arr.erase(arr.begin());
}

int main()
{
	vector<int> arr={5,6,7,8,9};
	vector<pair<int,int>> arr1;
	int k=3,x=7; 
	for(int i=0;i < arr.size();i++)
	{
		arr1.push_back({abs(x-arr[i]),arr[i]});
	}
	buildheap(arr1);
	for(int i=0;i < arr.size()-k-1;i++)
		buildheap(arr1);
	for(int i=0;i<arr1.size();i++)
		cout<<arr1[i].first<<" "<<arr1[i].second<<endl;
	return 0;
}