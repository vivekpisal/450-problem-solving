#include<iostream>
#include<vector>
using namespace std; 
int main()
{
	vector<int> a={4,0,0,2,0,4};
	int level=min(a[0],a[a.size()-1]);
	int water=0;
	for(int i=0;i<a.size();i++)
	{
		if(a[i]<level)
		water=water+level-a[i];
	}
	cout<<water;
	return 0;
}