#include<bits/stdc++.h>
using namespace std;

class Graph{

public:
	unordered_map<int,vector<int>> edges;
	unordered_map<int,int> visited;
	
	void AddEdge(int x,int y)
	{
		edges[x].push_back(y);
	}
	
	bool DetectCycle()
	{
		for(auto i:edges)
		{
			visited[i.first]=1;
			for(int j:edges[i.first])
			{
				bool r = util(j);
				if(r)
					return true;
			}
			visited[i.first]=0;
		}
		return false;
	}

private:
	
	bool util(int node)
	{
		if(visited[node] == 1)
			return true;
		visited[node] = 1;
		for(int i:edges[node])
		{
			if(visited[i] == 1)
				return true;
			bool flag = util(i);
			if(flag)
				return true;
		}
		visited[node] = 0;
		return false;
	}

};

int main()
{
	Graph g;
	g.AddEdge(0,1);
	g.AddEdge(1,2);
	g.AddEdge(2,3);
	g.AddEdge(3,0);
	cout<<g.DetectCycle();
	return 0;
}