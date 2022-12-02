#include<bits/stdc++.h>
#include <vector>
using namespace std;
int cap(vector<vector<char>>& b, int x, int y, int dx, int dy)
{
	while(x >= 0 && x < b.size() && y >= 0 && y < b[x].size() && b[x][y] != 'B')
    {
		if(b[x][y] == 'p')
            return 1;
        x += dx;
        y += dy;
    }
    return 0;
}
int main(void)
{

	vector<vector<char>>board{{'.','.','.','.','.','.','.','.'},{'.','.','.','p','.','.','.','.'},{'.','.','.','R','.','.','.','p'},{'.','.','.','.','.','.','.','.'},{'.','.','.','.','.','.','.','.'},{'.','.','.','p','.','.','.','.'},{'.','.','.','.','.','.','.','.'},{'.','.','.','.','.','.','.','.'}};
	int captures = 0;
	for(int i = 0; i < board.size(); i++)
    {
		for(int j = 0; j < board[i].size(); j++)
        {
			if(board[i][j] == 'R')
				captures = cap(board,i,j,0,1) + cap(board,i,j,0,-1) + cap(board,i,j,1,0) + cap(board,i,j,-1,0);
        }
    }
	cout<<"The no of available captures for the rook is " << captures <<endl; 
	return 0;
}
