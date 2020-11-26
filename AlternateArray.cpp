#include<iostream>
#include<vector>
using namespace std;
int main()
{
	vector<int> arr={1,2,3,4,5},ans;
	int i=0,j=arr.size()-1;
	while(j>=i)
	{	
		if(i!=j)
		{
			ans.push_back(arr[j--]);
			ans.push_back(arr[i++]);
		}
		else
			ans.push_back(arr[j--]);
	}
	for(int i=0;i<ans.size();i++)
		cout<<ans[i]<<" ";
	return 0;
}