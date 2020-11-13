#include<iostream>
using namespace std;
int f=0;
int partition(int arr[],int lb,int ub)
{
	int pivot=arr[lb],right=lb,left=ub;
	while(right<left)
	{
		while(arr[lb]>=arr[right])
			right++;
		while(arr[lb]<arr[left])
			left--;
		if(right<left)
			swap(arr[right],arr[left]);
		if(right>left)
		{
			swap(arr[lb],arr[left]);
			if(arr[lb]!=arr[left])
			{
				f+=1;
				cout<<arr[lb]<<" "<<arr[left]<<endl;
			}
		}
	}
	return left;
}
void qsort(int arr[],int lb,int ub)
{
	if(lb<ub)
	{
		int mid=partition(arr,lb,ub);
		qsort(arr,lb,mid-1);
		qsort(arr,mid+1,ub);
	}
}
int main()
{
	int arr[]={101 ,758, 315, 730, 472 ,619, 460, 479},n=7;
	qsort(arr,0,n);
	for(int i=0;i<n+1;i++)
		cout<<arr[i]<<" ";
	cout<<endl<<f;
	return 0;
}