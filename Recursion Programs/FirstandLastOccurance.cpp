#include<iostream>
#include<vector>
using namespace std;

int FirstOccurance(vector<int> arr,int i,int key)
{
	if(arr[i]==key)
		return i+1;
	if(i==arr.size()-1)
		return -1;
	return FirstOccurance(arr,i+1,key);
}
int LastOccurance(vector<int> arr,int i,int key)
{
	if(arr[i]==key)
		return i+1;
	if(i==0)
		return -1;
	return LastOccurance(arr,i-1,key);
}
int main()
{
	vector<int> arr={1,2,3,4,5,2,1};
	cout<<FirstOccurance(arr,0,3)<<" ";
	cout<<LastOccurance(arr,arr.size()-1,3);
	return 0;
}