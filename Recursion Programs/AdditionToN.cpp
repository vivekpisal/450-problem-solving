#include<iostream>
using namespace std;

int AddToN(int n)
{
	if(n==1)
		return n;
	return n+AddToN(n-1);
}

int main()
{
	cout<<AddToN(5);
	return 0;
}