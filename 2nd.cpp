#include<iostream>
using namespace std; 

int main()
{
	int a[]={23,2,34,3,12,34,56};
	int n=sizeof(a)/sizeof(a[0]);
	int min=a[0],max=a[0];
	/*for(int i=0;i<n;i++)
	{
		for(int j=0;j<n;j++)
		{
			if(a[j]>a[j+1])
			{
				temp=a[j];
				a[j]=a[j+1];
				a[j+1]=temp;
			}
		}
	}
	*/
	for(int i=0;i<n;i++)
	{
		if(max<a[i])
		{
			max=a[i];
		}
		if(min>a[i])
		{
			min=a[i];
		}
	}
	cout<<"max element is: "<<max;
	cout<<"\n min element is: "<<min;
	return 0;
}