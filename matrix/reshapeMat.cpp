#include<bits/stdc++.h>
#include <vector>
using namespace std;
int main(void)
{
	vector<vector<int>>mat{{1,2},{3,4}};
	int r = 1, c = 4;
	vector<vector<int>>res(r,vector<int>(c));
    int m = mat.size(); 
    int n = mat[0].size();
    if(r * c != m * n)
        cout<<"Reshaping is undefined"<<endl;
    for(int i = 0; i < r * c; i++)
    {
        res[i / c][i % c] = mat[i / n][i % n];
    }
	for(int i = 0; i < res.size(); i++)
	{
		for(int j = 0; j < res[i].size(); j++)
		{
			cout<<res[i][j]<<" ";
		}
		cout<<endl;
	}
	return 0;
}
