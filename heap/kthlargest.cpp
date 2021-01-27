#include<iostream>
#include<vector>
using namespace std;

vector<int> heap;
void heapify(int i)
{
	int smallest=i;
	int l=(2*i)+1;
	int r=(2*i)+2;
	int n=heap.size();
	if(l<n && heap[smallest]>heap[l])
		smallest=l;
	if(r<n && heap[smallest]>heap[r])
		smallest=r;
	if(smallest!=i)
	{
		swap(heap[smallest],heap[i]);
		heapify(smallest);
	}
}
void buildheap(int index)
{
	int startindex=(index-1)/2;
	for(int i=startindex;i>=0;i--)
		heapify(i);
	//if(heap.size()==5)
	//	heap.erase(heap.begin());
}
void insert(vector<int> arr)
{
	for(int i=0;i<arr.size();i++)
	{
		heap.push_back(arr[i]);
		buildheap(i);
	}
}
void printheap()
{
	for(int i=0;i<heap.size();i++)
		cout<<heap[i]<<" ";
}
int main()
{
	vector<int> a={5,1,10,30,20};
	insert(a);
	printheap();
	return 0;
}