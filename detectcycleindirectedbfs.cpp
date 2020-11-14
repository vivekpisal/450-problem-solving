#include<iostream>
#include<map>
#include<vector>
#include<queue>
using namespace std;
class Graph
{
public:
	map<int,vector<int>> edges;
	map<int,bool> visited;
	map<int,int> parent;
	void insert(int x,int y)
	{
		edges[x].push_back(y);
	}
	bool bfs(int root)
	{
		queue<int> q;
		q.push(root);
		visited[root]=true;
		parent[root]=root;
		while(!q.empty())
		{
			int node=q.front();
			q.pop();
			for(auto i:edges[node])
			{
				if(visited[i]==false)
				{
					q.push(i);
					visited[i]=true;
				}
				else if(visited[i]==true && parent[node]!=i)
				{
					return true;
				}
			}
		}
		return false;
	}
};
int main()
{
	Graph g;
	g.insert(1,2);
	g.insert(2,3);
	g.insert(3,4);
	g.insert(4,5);
	cout<<g.bfs(1);
	return 0;
}