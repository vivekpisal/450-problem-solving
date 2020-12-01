#include<iostream>
using namespace std; 
void printToN(int n)
{
	if(n==0)
		return;
	cout<<n<<endl;
	printToN(n-1);
}
int main()
{
	printToN(6);
	return 0;
}