#include<bits/stdc++.h>
using namespace std;

void display(vector<vector<int>> board)
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
}

void solve(vector<vector<int>>& board,bool radj[4],bool sadj[4],bool cols[4],string asf,int row)
{
	if(row == 4)
	{
		display(board);
		return;
	}
	for(int col=0;col<board[0].size();col++)
	{
		if(radj[row + col] == false && sadj[row - col + board.size()-1] == false && cols[col] == false)
		{
			radj[row + col] = true;
			sadj[row - col + board.size()-1] = true;
			cols[col] = true;
			board[row][col] = 1;
			string ans = (row+'0') + "-" + (col + '0');
			solve(board,radj,sadj,cols,asf + ans,row+1);
			radj[row + col] = false;
			sadj[row - col + board.size()-1] = false;
			cols[col] = false;
			board[row][col] = 0;
		}
	}
}


int main()
{
	int n=4;
	vector<vector<int>> board(4,vector<int> (4, 0));
	bool sadj[2*n-1]={false},radj[2*n -1]={false};
	bool col[n]={false};
	string asf="";
	solve(board,radj,sadj,col,asf,0);
	return 0;
}