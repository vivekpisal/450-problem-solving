#include<iostream>
#include<vector>
using namespace std;
int main()
{
	vector<int> one={1,3,5,7,9},second={2,4,6,8,10},main;
	int i=0,j=0;
	while(i<one.size() && j<second.size())
	{
		if(one[i]<second[j])
		{
			main.push_back(one[i]);
			i++;
		}
		else
		{
			main.push_back(second[j]);
			j++;
		}
	}
	while(i<one.size())
		main.push_back(one[i++]);
	while(j<second.size())
		main.push_back(second[j++]);
	for(int i=0;i<main.size();i++)
		cout<<main[i]<<" ";
	return 0;
}