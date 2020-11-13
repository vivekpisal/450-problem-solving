#include<iostream>
#include<vector>
#include<map>
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
		edges[y].push_back(x);
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
					parent[i]=node;
				}
				else if(parent[node]!=i)
				{
					return true;
				}
			}	
		}
		return false;
	}
	void show()
	{
		for(auto i:edges)
		{
			cout<<i.first<<"-> ";
			for(auto j:i.second)
			{
				cout<<j<<" ";
			}
			cout<<endl;
		}
	}
};



int main()
{
	Graph g;
	g.insert(1,2);
	g.insert(2,3);
	g.insert(3,1);
	g.insert(3,4);
	cout<<g.bfs(1);
	return 0;
}