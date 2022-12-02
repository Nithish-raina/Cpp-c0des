#include <bits/stdc++.h>
#include <vector>
#define M 2
#define N 2
using namespace std;
bool checkDiagonal(int mat[M][N],int r, int c)
{
	int ele = mat[r][c];
	while(++r < M && ++c < N)
	{
		if(mat[r][c] != ele)
			return false;
	}
	return true;
}
bool isToePlitz(int mat[M][N])
{
	// checking for each element in the first row
	for(int i = 0; i < N; i++)
	{
		if(!checkDiagonal(mat,0,i))
			return false;
	}
	// checking for each element in the first column
	for(int j = 0; j < M; j++)
	{
		if(!checkDiagonal(mat,j,0))
			return false;
	}
	return true;
}
int main(void)
{
	int matrix[M][N] = {{1,2},{2,1}};
	if(isToePlitz(matrix))
		cout<<"Matrix is toeplitz"<<endl;
	else
		cout<<"Matrix is not toeplitz" << endl;
	return 0;
}
