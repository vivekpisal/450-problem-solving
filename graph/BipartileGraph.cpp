#include<bits/stdc++.h>
using namespace std;

unordered_map<int,vector<int>> edges;

void addNode(int x,int y)
{
	if(edges.find(x)!=edges.end())
		edges[x].push_back(y);
	else
		edges[x]={y};

	if(edges.find(y)!=edges.end())
		edges[y].push_back(x);
	else
		edges[y]={x};
}

bool checkBipartile()
{
	queue<int> q;
	int visited[9];
	fill_n(visited,9,-1);
	
	q.push(1);
	visited[1]=0;
	bool f=true;
	while(!q.empty())
	{
		int curr = q.front();
		q.pop();
		for(int i:edges[curr])
		{
			if(visited[i] == -1)
			{
				q.push(i);
				if(visited[curr] == 0)
					visited[i]=1;
				else
					visited[i]=0;
			}
			else if(visited[i] == visited[curr])
				f=false;
		}
	}
	for(int i:visited)
		cout<<i<<" ";
	return f;
}

int main()
{
	addNode(1,2);
	addNode(2,3);
	addNode(3,4);
	addNode(2,7);
	addNode(4,5);
	addNode(7,6);
	addNode(6,5);
	addNode(5,8);
	if(checkBipartile())
		cout<<"Bipartile Graph";
	else
		cout<<"Not bipartile graph";
	return 0;
}