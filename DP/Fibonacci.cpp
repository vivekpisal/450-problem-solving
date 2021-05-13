#include<bits/stdc++.h>
using namespace std;

int fib(int f)
{
	if(f == 0 || f == 1)
		return f;

	return fib(f-1) + fib(f-2);
}

int main()
{
	int f = 4;
	cout<<fib(9);
	return 0;
}
