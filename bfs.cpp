#include<iostream>
#include<vector>
#include<queue>
using namespace std;
vector<vector<int>> edges;
vector<bool> visited;
void bfs(int node)
{
	queue<int> l;
	l.push(node);
	visited[node]=true;
	while(!l.empty())
	{
		node=l.front();
		l.pop();
		cout<<node<<" ";
		for(int i=0;i<edges[node].size();i++)
		{
			if(!visited[edges[node][i]])
			{
				l.push(edges[node][i]);
				visited[edges[node][i]]=true;
			}
		}
	}

}
int main()
{
	int n,u,v;
	cin>>n;
	edges.resize(n+1);
	visited.resize(n+1);
	while(n--)
	{
		cin>>u>>v;
		edges[u].push_back(v);
		edges[v].push_back(u);
	}
	bfs(1);
	return 0;
}


