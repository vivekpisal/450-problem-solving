#include<bits/stdc++.h>
using namespace std;
vector<int> NGL(vector<int> arr)
{
	vector<int> ans;
	stack<int> st;
	for(int i=0;i<arr.size();i++)
	{
		if(st.empty())
		{
			ans.push_back(-1);
			st.push(arr[i]);
		}
		else
		{
			while(!st.empty() && st.top() < arr[i])
				st.pop();
			if(st.empty())
			{
				ans.push_back(-1);
				st.push(arr[i]);
			}
			else if(st.top() > arr[i])
			{
				ans.push_back(st.top());
				st.push(arr[i]);
			}
		}
	}
	return ans;
}
int main()
{
	vector<int> v = {2,4,3,1};
	vector<int> ans;
	ans = NGL(v);
	for(auto i:ans)
		cout<<i<<" ";
	return 0;
}