#include<bits/stdc++.h>
using namespace std; 
int main()
{
	vector<vector<int>> edges(6);
	int n;
	cin>>n;
	int u,v;
	for(int i=0;i<n;i++)
	{
		cin>>u>>v;
		edges[u].push_back(v);
		edges[v].push_back(u);
	}
	stack<int> st;
	vector<int> visited(edges.size(),0);
	st.push(0);
	visited[0]=1;
	while(!st.empty())
	{
		int node = st.top();
		st.pop();
		cout<<node<<" ";
		for(auto i:edges[node])
		{
			if(visited[i] == 0)
			{
				st.push(i);
				visited[i]=1;
			}
		}
	}
	return 0;
}