#include<bits/stdc++.h>
using namespace std;
int main()
{
	vector<vector<int>> edges;
	int n;
	cin>>n;
	edges.resize(n);
	int u,v;
	for(int i=0;i<n;i++)
	{
		cin>>u>>v;
		edges[u].push_back(v);
		edges[v].push_back(u);
	}
	vector<int> st;
	vector<int> visited(n,0);
	visited[0]=1;
	st.push_back(0);
	while(!st.empty())
	{
		int node=st[0];
		st.erase(st.begin());
		cout<<node<<" ";
		for(auto i:edges[node])
		{
			if(visited[i] == 0)
			{
				st.push_back(i);
				visited[i]=1;
			}
		}
	}
	return 0;
}