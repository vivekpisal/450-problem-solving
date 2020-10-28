#include <iostream>
#include<algorithm>
using namespace std;

int main() {
	// your code goes here
	int n,k;
	cin>>n>>k;
	int a[n];
	for(int i=0;i<n;i++)
	{
	    cin>>a[i];
	}
	sort(a,a+n);
	int hmax,hmin,min=a[0+k-1]-a[0];
	for(int i=0;i<n;i++)
	{
	    hmin=a[i];
	    hmax=a[i+k-1];

	    if(min>(hmax-hmin))
	    {
	        min=hmax-hmin;
	    }
	}
	cout<<min;
	return 0;
}
