#include<iostream>
using namespace std;


int main()
{
	int a[]={1,2,3,4,5,6,7,80};
	int temp,j=7;;
	for(int i=0;i<4;i++)
	{
		temp=a[i];
		a[i]=a[j];
		a[j]=temp;
		j--;
	}
	for(int i=0;i<8;i++)
	{
		cout<<a[i]<<" ";
	}
	return 0;
}