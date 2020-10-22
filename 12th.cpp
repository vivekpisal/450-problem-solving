#include<iostream>
using namespace std;


int main()
{
	int a[]={10, 12};
	int b[]={5, 18, 20};
	int i=0,j=0;
	int size_a=sizeof(a)/sizeof(a[0]);
	int size_b=sizeof(b)/sizeof(b[0]);
	int m[size_a+size_b];
	int n=size_b>size_a?size_b:size_a;
	int k;
	for(k=0;k<n;k++)
	{
		if(a[i]>b[j])
		{
			m[k]=b[j];
			j++;
		}
		else
		{
			m[k]=a[i];
			i++;
		}
	}
	while(j<size_b)
	{
		m[k]=b[j];
		k++;j++;
	}
	while(i<size_a)
	{
		m[k]=a[i];
		k++;i++;
	}
	for(int k=0;k<size_a+size_b;k++)
	{
		cout<<m[k]<<" ";
	}
	return 0;
}