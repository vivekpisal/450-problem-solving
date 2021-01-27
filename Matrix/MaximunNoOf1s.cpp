#include<bits/stdc++.h>
using namespace std;
int main()
{
	vector<vector<int>> mat = {{0,1,1,1},{0,0,1,1},{1,1,1,1},{0,0,0,0}};
	int row = 0;
	int maxone = 0;
	for(int i=0;i < mat.size();i++)
	{
		int temp=0;
		for(int j=0;j < mat[i].size();j++)
		{
			if(mat[i][j] == 1)
				temp++;
		}
		if(temp > maxone)
		{
			maxone = temp;
			row = i;
		}
	}
	cout<<row;
	return 0;
}