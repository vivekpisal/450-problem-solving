#include<iostream>
using namespace std;
void show(int k)
{
	if(k==0)
	{
		return;
	}
	cout<<"hello"<<endl;
	show(--k);
}
int main()
{
	show(10);
	return 0;
}