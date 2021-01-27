#include<iostream>
#include<vector>
#include<queue>
#include<map>
#include<set>
using namespace std;
class Graph{
public:
	map<int,vector<pair<int,int>>> edges;
	void insert(int x,int y,int w)
	{
		edges[x].push_back({y,w});
		edges[y].push_back({x,w});
	}
	void bfs(int node)
	{
		queue<int> q;
		map<int,bool> visited;
		q.push(node);
		visited[node]=true;
		while(!q.empty())
		{
			int node=q.front();
			q.pop();
			cout<<node<<" ";
			for(auto i:edges[node])
				if(visited[i.first]==false)
				{
					q.push(i.first);
					visited[i.first]=true;
				}
		}
	}
};
int main()
{
	Graph g;
	g.insert(1,2,4);
	g.insert(2,3,3);
	g.insert(3,1,5);
	g.bfs(1);
	return 0;
}