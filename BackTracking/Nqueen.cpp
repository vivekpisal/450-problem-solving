#include<bits/stdc++.h>
using namespace std;

bool canPlace(vector<vector<int>> &board,int radj[],int ladj[],int col[],int x,int y)
{
	if(col[y] == 0 && ladj[x+y] == 0 && radj[x-y+3] == 0)
		return true;
	return false;
}

void solve(vector<vector<int>> &board,int radj[],int ladj[],int col[],int x,int y)
{
	if(x == board.size())
	{
		for(int i=0;i<board.size();i++)
		{
			for(int j=0;j<board[0].size();j++)
			{
				cout<<board[i][j]<<" ";
			}
			cout<<endl;
		}
		cout<<endl;
		return;
	}
	for(int i=0;i<board[0].size();i++)
	{
		if(col[i] == 0 && ladj[x+i] == 0 && radj[x-i+3] == 0)
		{
			board[x][i]=1;
			ladj[x+i]=1;
			radj[x-i + 3]=1;
			col[i]=1;
			solve(board,radj,ladj,col,x+1,0);
			ladj[x+i]=0;
			col[i]=0;
			radj[x-i + 3]=0;
			board[x][i]=0;
		}
	}
}



int main()
{
	int n=4,m=4;
	vector<vector<int>> board(n,vector<int> (m,0));
	int col[m]={0};
	int radj[(n+m)]={0};
	int ladj[(n+m)]={0};
	fill_n(radj,n+m,0);
	fill_n(ladj,n+m,0);
	solve(board,radj,ladj,col,0,0);
	return 0;
}