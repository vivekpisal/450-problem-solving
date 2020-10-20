#include<iostream>
#include<vector>

using namespace std; 

int main()
{
	vector <int> c={12,23,34,44,53,70,45,6,5,3,2};
	sort(c.begin(),c.end());
	for(int i=0;i<c.size();i++)
	{
		cout<<c[i]<<" ";
	}
	return 0;
}