#include<iostream>
using namespace std;

void printTo1(int n)
{
	if(n==0)
		return;
	printTo1(n-1);
	cout<<n<<endl;
}

int main()
{
	printTo1(6);
	return 0;
}