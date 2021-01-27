#include<iostream>
#include<queue>
#include<map>
#include<vector>
using namespace std;
class graph
{
public:
	map<int,vector<int>> edges;
	map<int,int> parent;
	map<int,bool> visited;
	void insert(int x,int y)
	{
		edges[x].push_back(y);
		edges[y].push_back(x);
	}
	bool detectcycle(int root)
	{
		queue<int> q;
		q.push(root);
		parent[root]=root;
		visited[root]=true;
		while(!q.empty())
		{
			int node=q.front();
			q.pop();
			for(auto i:edges[node])
			{
				if(visited[i]==true && parent[node]!=i)
						{cout<<i<<" "<<node<<endl;return true;}
				else if(visited[i]==false)
				{
					q.push(i);
					parent[i]=node;
					visited[i]=true;
				}
			}
		}
		return false;
	}
};
int main()
{
	graph g;
	g.insert(1,2);
	g.insert(2,3);
	g.insert(1,4);
	g.insert(3,4);
	cout<<g.detectcycle(1);
	return 0;
}