#include<iostream>
using namespace std;
int lastOccurance(int arr[],int i,int key)
{
	if(arr[i]==key)
		return i+1;
	if(i==0)
		return -1;
	return lastOccurance(arr,i-1,key);
}

int main()
{
	int arr[]={1,2,1,3,2,3,4};
	cout<<lastOccurance(arr,6,3);
	return 0;
}