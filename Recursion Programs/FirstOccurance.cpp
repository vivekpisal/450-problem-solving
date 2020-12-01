#include<iostream>
using namespace std;
int firstoccurance(int arr[],int i,int key)
{
	if(arr[i]==key)
		return i+1;
	if(i==6)
		return -1;
	return firstoccurance(arr,i+1,key);
}
int main()
{
	int arr[]={1,2,3,1,2,3,4};
	cout<<firstoccurance(arr,0,10);
	return 0;
}