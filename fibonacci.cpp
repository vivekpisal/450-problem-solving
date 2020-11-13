#include<iostream>
#include<vector>
using namespace std;
int fib(vector<int> &a,int n)
{
	if(n<=1)
		return 1;
	if(a[n]==-1)
		a[n]=fib(a,n-1)+fib(a,n-2);
	return a[n];

}
int main()
{
	vector<int> a(8,-1);
	for(int i=0;i<8;i++)
		cout<<fib(a,i)<<" ";
	return 0;
}