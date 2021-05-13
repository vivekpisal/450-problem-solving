#include<bits/stdc++.h>
using namespace std;

int gold=0;
void GoldMine(vector<vector<int>> mine,vector<vector<bool>> visited)
{
    for(int i=0;i<mine.size();i++)
    {
        for(int j=0;j<mine[0].size();j++)
        {
            if(visited[i][j] == false && mine[i][j] != 0)
            {
                stack<pair<int,int>> st;
                st.push({i,j});
                while(!st.empty())
                {
                    auto l = st.top();
                    st.pop();
                    if(l.first-1 >= 0 && mine[l.first-1][l.second] != 0 && visited[l.first-1][l.second] == false)
                    {
                        gold+=mine[l.first-1][l.second];
                        st.push({l.first-1,l.second});
                        visited[l.first-1][l.second]=true;
                    }
                    if(l.first + 1 < mine.size() && mine[l.first+1][l.second] != 0 && visited[l.first+1][l.second] == false)
                    {
                        gold+=mine[l.first+1][l.second];
                        st.push({l.first+1,l.second});
                        visited[l.first+1][l.second]=true;
                    }
                    if(l.second - 1 >= 0 && mine[l.first][l.second-1] != 0 && visited[l.first][l.second-1] == false)
                    {
                        gold+=mine[l.first][l.second - 1];
                        st.push({l.first,l.second - 1});
                        visited[l.first][l.second - 1]=true;
                    }
                    if(l.second + 1 < mine[0].size() && mine[l.first][l.second+1] != 0 && visited[l.first][l.second+1] == false)
                    {
                        gold+=mine[l.first][l.second + 1];
                        st.push({l.first,l.second + 1});
                        visited[l.first][l.second + 1]=true;
                    }
                }
            }
        }
    }
}


int main()
{
	int arr[7][7]={{10,0,100,200,0,8,0},{20,0,0,0,0,6,0},{30,0,0,9,12,3,4},{40,0,2,5,8,3,11},{0,0,0,0,0,9,0},{5,6,7,0,7,4,2},{8,9,10,0,1,10,8}};
	vector<vector<int>> mine={{0,6,0},{5,6,7},{0,9,0}};
	vector<vector<bool>> visited(grid.size(),vector<bool> (grid[0].size(),false));
	GoldMine(mine,visited);
	return 0;
}