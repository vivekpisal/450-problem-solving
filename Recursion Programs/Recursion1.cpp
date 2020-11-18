#include<iostream>
using namespace std; 
void show(int x,int y)
{
	if(x==y)
	{
		cout<<x;
		return;
	}
	cout<<x<<" ";
	show(x+1,y);
	
}
int main()
{
	show(1,10);
	return 0;
}