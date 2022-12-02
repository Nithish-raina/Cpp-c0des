#include <bits/stdc++.h>
#include <cstdio>
#include <cstdlib>
#include <vector>
using namespace std;
vector<vector<char>>grid;
bool dfs(vector<vector<char>>&board, string word, int index, int r, int c)
{
	if(index >= board.size())
		return true;
	if(r < 0 || r >= board.size() || c < 0 || c >= board[0].size() || grid[r][c] != word[index])
		return false;
	grid[r][c] = '#';
	vector<int>dirX{0,1,0,-1};
	vector<int>dirY{1,0,-1,0};
	for(int d = 0; d < 4; d++)
	{
		if(dfs(board,word,index+1,r+dirX[d],c+dirY[d]))
			return true;
	}
	grid[r][c] = word[index];
	return false;
}
bool isExist(vector<vector<char>>&board,string word)
{
	for(int i = 0; i < board.size(); i++)
	{
		for(int j = 0; j < board[0].size();j++)
		{
			if(dfs(board,word,0,i,j))
				return true;
		}
	}
	return false;
}
int main(void)
{
	vector<vector<char>>board{{'A','B','C','E'},{'S','F','C','S'},{'A','D','E','E'}};
	string word = "FCSEED";
	grid = board;
	if(isExist(board,word))
		cout<<"Word exists"<<endl;
	else
		cout<<"Word doesn't exists"<<endl;
	return 0;
}
