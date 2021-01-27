#include<bits/stdc++.h>
using namespace std;
int main()
{
	vector<vector<int>> mat={{ 1, 2, -1, -4, -20 },
             { -8, -3, 4, 2, 1 }, 
             { 3, 8, 6, 1, 3 },
             { -4, -1, 1, 7, -6 },
             { 0, -4, 10, -5, 1 }};
    int max=INT_MIN;
    for(int i=0;i<mat.size()-1;i++)
    {
    	for(int l=0;l<mat[i].size()-1;l++)
    	{
	    	for(int j=i+1;j<mat.size();j++)
	    	{
	    		for(int k=l+1;k<mat[0].size();k++)
	    		{
	    			if(mat[j][k] - mat[i][l] > max)
	    			{
	    				max = mat[j][k] - mat[i][l];
	    			}
	    		}
	    	}
    	}
    }
    cout<<max<<endl;
	return 0;
}