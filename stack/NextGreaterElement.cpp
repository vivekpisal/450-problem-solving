#include<bits/stdc++.h>
using namespace std;

vector<int> NG(vector<int> arr)
{
	stack<int> st;
	vector<int> ans;
	for(int i=arr.size()-1;i>=0;i--)
	{
		if(st.empty())
		{
			ans.push_back(-1);
			st.push(arr[i]);
		}
		else
		{
			while(!st.empty() && st.top() < arr[i])
			{
				st.pop();
			}
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
	vector<int> v = {1,3,4,2};
	vector<int> ans = NG(v);
	reverse(ans.begin(),ans.end());
	for(int i=0;i<ans.size();i++)
	{
		cout<<ans[i]<<" ";
	}
	return 0;
}