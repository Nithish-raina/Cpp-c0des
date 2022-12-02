/* u - rowStart, d - rowEnd, l - colStart, r - colEnd */ 
#include <bits/stdc++.h>
#include <vector>
using namespace std;
int main(void)
{
	vector<vector<int>>matrix{{1,2,3},{4,5,6},{7,8,9}};
	int m = matrix.size(), n = m ? matrix[0].size() : 0, u = 0, d = m - 1, l = 0, r = n - 1, p = 0;
    vector<int> res(m * n);
    while (u <= d && l <= r) 
	{
    for(int col = l; col <= r; col++) 
	{
		res[p++] = matrix[u][col];
    }
    if (++u > d) {
		break;
    }
    for (int row = u; row <= d; row++) {
        res[p++] = matrix[row][r];
    }
    if (--r < l) {
        break;
    }
    for (int col = r; col >= l; col--) {
		res[p++] = matrix[d][col];
    }
    if (--d < u) {
		break;
    }
    for (int row = d; row >= u; row--) {
        res[p++] = matrix[row][l];
    }
    if (l++ > r) {
        break;
    }
	}
	for(auto i : res)
		cout<<i<<" ";
	cout<<endl;
	return 0;
}
