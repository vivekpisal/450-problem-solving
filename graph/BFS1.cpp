#include<bits/stdc++.h>
using namespace std;

class Graph{
	unordered_map<int,vector<int>>  edges;
public:
	
	void addEdge(int x,int y)
	{
		edges[x].push_back(y);
		edges[y].push_back(x);
	}
	void dfs(int start)
	{ 
		stack<int> s;
		unordered_map<int,bool> visited;
		s.push(start);
		while(!s.empty())
		{
			int node = s.top();
			s.pop();
			visited[node]=true;
			cout<<node<<" ";
			for(int i=0;i<edges[node].size();i++)
			{
				if(visited[edges[node][i]] == false)
				{
					s.push(edges[node][i]);
					visited[edges[node][i]]=true;
				}
			}
		}
	}
	void bfs(int start)
	{
		queue<int> q;
		unordered_map<int,bool> visited;
		q.push(start);
		while(!q.empty())
		{
			int node = q.front();
			q.pop();
			cout<<node<<" ";
			visited[node]=true;
			for(int i=0;i<edges[node].size();i++)
			{
				if(visited[edges[node][i]] == false)
				{
					visited[edges[node][i]]=true;
					q.push(edges[node][i]);
				}																																																																																																																																																																																																																																																																																																																																																																																																																																																																																																																																																																																																																																																																																																																																																																																																																																																																																																																																																																																																																																																																																																																																																																																																																																																																																																																																																																																																																																																																																																																																																																																																																																																																																																																																																																																																														
			}
		}
	}
};
int main()
{
	Graph g;
	g.addEdge(1,2);
	g.addEdge(1,3);
	g.addEdge(2,3);
	g.addEdge(1,4);
	g.addEdge(4,3);
	g.dfs(1);
	g.b`fs(1);
	return 0;
}