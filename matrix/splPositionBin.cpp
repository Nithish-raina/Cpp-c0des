#include <bits/stdc++.h>
#include <vector>
using namespace std;
int main(void)
{
	vector<vector<int>>mat{{1,0,0},{0,0,1},{1,0,0}};
	int r = mat.size();
    int c = mat[0].size();
    vector<int>rows(r,0);
    vector<int>cols(c,0);
    for(int i = 0; i < r; i++)
	{
        for(int j = 0; j < c; j++)
        {
			if(mat[i][j] == 1)
            {
                rows[i] += 1;
                cols[j] += 1;
            }
        }
    }
    int count = 0;
    for(int i = 0; i < r; i++)
    {
        for(int j = 0; j < c; j++)
        {
            if(mat[i][j] == 1 && rows[i] == 1 && cols[j] == 1)
                count++;
        }
    }
	cout<<"The no of special bin positions in the given bin matrix are " << count <<endl;
	return 0;
}
