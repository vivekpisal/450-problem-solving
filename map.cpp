#include<iostream>
#include<map>
#include<vector>
using namespace std;
int main()
{
	vector<pair<int,int>> v;
	v.push_back({1,3});
	v.push_back({2,3});
	for(auto i:v)
	{
		cout<<i.first<<" "<<i.second<<endl;
	}
	return 0;
}