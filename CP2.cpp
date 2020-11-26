#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;
int main()
{
	vector<vector<int>> mat={{8,8,8,8},{4,4,4,4},{6,6,6,6},{5,5,5,5},{8,8,8,8}};
	int size=mat[0].size();
	bool f=true;
	for(int i=0;i<mat.size();i++)
	{
		if(count(mat[i].begin(),mat[i].end(),mat[i][0])==size)
			f=true;
		else
		{
			f=false;
			cout<<"NO";
			break;
		}
	}
	if(f)
		cout<<"YES";
	return 0;
}