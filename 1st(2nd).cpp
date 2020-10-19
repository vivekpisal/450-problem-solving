#include<iostream>
using namespace std;
     

void rever(int a[],int i,int j)
{
	if(i>=j)
	{
		return;
	}
	int temp=a[i];
	a[i]=a[j];
	a[j]=temp;
	rever(a,++i,--j);
}



int main()
{
	int a[]={1,2,3,4,5,6,7,8};
	int n=sizeof(a)/sizeof(a[0]);
	rever(a,0,n-1);
	for (int i=0;i<8;i++)
	{
		cout<<a[i]<<" ";
	}
	return 0;
}