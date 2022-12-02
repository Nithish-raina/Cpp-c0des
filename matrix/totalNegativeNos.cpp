#include<bits/stdc++.h>
#include <vector>
using namespace std;
int main(void)
{
	vector<vector<int>>grid{{4,3,2,-1},{3,2,-1,-1},{1,1,-1,-2},{-1,-2,-2,-3}};
	int count = 0, m = grid.size(), n = grid[0].size(), i = 0, j = n - 1;
	while(i < m && j >= 0)
    {
		if(grid[i][j] < 0)
        {
            count += m - i;
            j--;
        }
        else
            i++;
    }
	cout<<"The total no of -ve nos in the given matrix is " << count << endl;
	return 0;
}
