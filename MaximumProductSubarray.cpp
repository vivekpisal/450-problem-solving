#include<iostream>
#include<algorithm>
using namespace std;

int main()
{
	int a[]={2,-1,0,3,4,5};
	int n=sizeof(a)/sizeof(a[0]);
	int mul=a[0]*a[1],mul_loop=1;
	for(int i=0;i<n;i++)
	{

		mul_loop=mul_loop*a[i];
		if(a[i]==0)
			mul_loop=1;
		if(mul_loop>mul)
		{
			mul=mul_loop;
		}
		
	}
	cout<<mul<<endl;
	return 0;
}