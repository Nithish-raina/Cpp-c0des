#include<bits/stdc++.h>
#include <vector>
using namespace std;
int main(void)
{
	vector<vector<int>>mat{{1,2,3},{4,5,6},{7,8,9}};
	int sum = 0;
    int n = mat.size();
    for(int i = 0; i < n; i++)
    {
        if(i != n - 1 - i)
            sum += mat[i][i] + mat[i][n - 1 - i];
        else
            sum += mat[i][i];
    }
    cout<<"The sum of pri Diagonal and sec diagonal elements are " << sum << endl;
	return 0;
}
