#include<iostream>
#include<vector>
using namespace std;

vector<int> heap;
void heapify(int index)
{
	int largest=index;
	int l=(2*index)+1;
	int r=(2*index)+2;
	int n=heap.size();
	if(l<n && heap[largest] < heap[l])
		largest=l;
	if(r<n && heap[largest] < heap[r])
		largest=r;
	if(largest!=index)
	{
		swap(heap[largest],heap[index]);
		heapify(largest);
	}
}
void buildheap()
{
	int startidx=(heap.size()/2)-1;
	for(int i=startidx;i>=0;i--)
	{
		heapify(i);
	}
	if(heap.size()==4)
	{
	 	heap.erase(heap.end()-1);
		heapify(3);
	}
}
void insert(vector<int> arr)
{
	for(int i=0;i<arr.size();i++)
	{
		heap.push_back(arr[i]);
		buildheap();
	}
}
void printheap()
{
	for(int i=0;i<heap.size();i++)
		cout<<heap[i]<<" ";
}
int main()
{
	vector<int> arr={61,1,2,3,4,6,10,20,30,40};
	insert(arr);
	printheap();
	return 0;
}