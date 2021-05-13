#include<bits/stdc++.h>
using namespace std;
bool iscyclic(vector<int> edges[],int vis[],int dfsvis[],int curr)
{
	vis[curr]=1;
	dfsvis[curr]=1;

	for(int i:edges[curr])
	{
		if(!vis[i])
		{
			if(iscyclic(edges,vis,dfsvis,i)) return true;
		}
		else if(dfsvis[i])
			return true;
	}
	dfsvis[curr]=false;
	return false;
}


int main()
{
	vector<int> edges[10];
	edges[1]={2};
	edges[2]={3};
	edges[3]={4,6};
	edges[4]={5};
	edges[6]={5};
	edges[7]={8};
	edges[8]={9};
	edges[9]={7};
	int vis[10],dfsvis[10];
	memset(vis,0,sizeof vis);
	memset(dfsvis,0,sizeof dfsvis);
	bool f=false;
	for(int i=1;i<9;i++)
	{
		if(!vis[i])
		{
			if(iscyclic(edges,vis,dfsvis,i))
				{f=true;cout<<"Cycle Found";}
		}
	}
	if(!f)
		cout<<"No cycle";
	return 0;
}