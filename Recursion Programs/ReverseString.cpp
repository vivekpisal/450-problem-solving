#include<iostream>
using namespace std;

string reverse(string a,int i,int j)
{
	if(i>=j)
		return a;
	swap(a[i],a[j]);
	return reverse(a,i+1,j-1);
}

int main()
{
	cout<<reverse("geeks",0,4);
	return 0;
}