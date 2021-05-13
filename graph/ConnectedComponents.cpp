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

void GetConnectedComp(vector<bool>& visited,int &count,int curr)
{
	if(visited[curr] == false)
	{
		stack<int> st;
		st.push(curr);
		while(!st.empty())
		{
			int node = st.top();
			st.pop();
			visited[node]=true;
			for(int i:edges[node])
			{
				if(visited[i] == false)
					st.push(i);
			}
		}
		count++;
	}
}

void ConnectedComp(vector<bool>& v,vector<int> &temp,int curr)
{
	v[curr]=true;
	temp.push_back(curr);
	for(int i:edges[curr])
	{
		if(v[i] == false)
			ConnectedComp(v,temp,i);
	}
}

int main()
{
	vector<bool> visited(edges.size()+1,false);
	addNode(0,1);
	addNode(2,3);
	addNode(4,5);
	addNode(5,6);
	addNode(4,6);
	int count=0;
	for(int i=0;i<edges.size();i++)
		GetConnectedComp(visited,count,i);
	cout<<count;
	count=0;
	vector<bool> v(edges.size()+1,false);
	vector<vector<int>> ans;
	for(int i=0;i<edges.size();i++)
	{
		if(v[i] == false)
		{
			vector<int> temp;
			ConnectedComp(v,temp,i);
			ans.push_back(temp);
		}
	}
	for(int i=0;i<ans.size();i++)
	{
		for(int j=0;j<ans[i].size();j++)
		{
			cout<<ans[i][j]<<" ";
		}
		cout<<endl;
	}
	return 0;
}