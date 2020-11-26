#include<iostream>
#include<algorithm>
#include<vector>
using namespace std;
int main()
{
	vector<int> arr={1, 2, 3, -4, -1, 4},ans;
	int i=0,j=arr.size()-1;
	/* First Apporach
	sort(arr.begin(),arr.end());
	while(j>=i)
	{	
		if(i!=j)
		{
			ans.push_back(arr[j--]);
			ans.push_back(arr[i++]);
		}
		else
			ans.push_back(arr[j--]);
	}*/
	vector<int> pos,neg;
	for(int i=0;i<arr.size();i++)
	{
		if(arr[i]>0)
			pos.push_back(arr[i]);
		else
			neg.push_back(arr[i]);
	}
	int p1=0,p2=0;
	for(int i=0;i<arr.size();i++)
	{
		if(p1<pos.size() && p2<neg.size())
		{
			if(i%2!=0)
				ans.push_back(pos[p1++]);
			else
				ans.push_back(neg[p2++]);
		}
		else
		{
			if(p1>pos.size())
				ans.push_back(neg[p2++]);
			else
				ans.push_back(pos[p1++]);
		}
	}
	for(int i=0;i<ans.size();i++)
		cout<<ans[i]<<" ";
	return 0;
}