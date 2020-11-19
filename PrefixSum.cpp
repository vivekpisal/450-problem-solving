#include<iostream>
using namespace std;
int main()
{
	int a[]={10,20,10,5,15};
	int n=sizeof(a)/sizeof(a[0]);
	int b[n];
	b[0]=a[0];
	for(int i=1;i<n;i++)
		b[i]=a[i]+b[i-1];
	int i=2,j=4;
	if(i==0)
		cout<<endl<<b[j];
	else
		cout<<b[j]-b[i-1];
	return 0;
}