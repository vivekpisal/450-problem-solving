#include<bits/stdc++.h>
using namespace std;

void merge(int arr[],int left,int mid,int right)
{
    int i=left,j=mid,k=0;
    int temp[right-left+1];
    while(i <= mid-1 && j <= right)
    {
        if(arr[i] <= arr[j])
            temp[k++]=arr[i++];
        else
            temp[k++]=arr[j++];
    }
    while(i <= mid-1)
        temp[k++]=arr[i++];
    
    while(j <= right)
        temp[k++]=arr[j++];
        
    for(int i=left;i<=right;i++)
        arr[i]=temp[i-left];
}


void mergesort(int arr[],int left,int right)
{
	int mid = (left + right) /2;
    if(left < right)
    {
        mergesort(arr,left,mid);
        mergesort(arr,mid+1,right);
        merge(arr,left,mid+1,right);
    }
}


int main()
{
    int arr[]={9,8,7,10,3};
    mergesort(arr,0,4);
    for(int i=0;i<5;i++)
        cout<<arr[i]<<" ";
    return 0;
}