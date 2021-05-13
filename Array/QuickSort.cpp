#include<bits/stdc++.h>
using namespace std;

int partition(int arr[],int left,int right)
{
	int i=left,j=right;
	int pivot=left;
	while(i < j)
	{
		while(arr[pivot] >= arr[i])
			i++;
		while(arr[pivot] < arr[j])
			j--;
		if(i < j)
			swap(arr[i],arr[j]);
	}
	swap(arr[j],arr[pivot]);
	return j;
}

void quicksort(int arr[],int left,int right)
{
	if(left < right)
	{
		int mid = partition(arr,left,right);
		quicksort(arr,left,mid);
		quicksort(arr,mid+1,right);
	}
}

int main()
{
	int arr[]={9,8,7,6,5,3};
	quicksort(arr,0,5);
	for(int i=0;i<6;i++)
		cout<<arr[i]<<" ";
	return 0;
}