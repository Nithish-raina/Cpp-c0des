#include <bits/stdc++.h>
using namespace std;
int main(void)
{
	int n = 4;
	vector<vector<long long int>>res(n); 
	for(int i = 0; i < n; i++)
	{
		res[i].resize(i+1);
		res[i][0] = res[i][i] = 1; 
		for(int j = 1; j < i; j++)
		{
			res[i][j] = res[i-1][j-1] + res[i-1][j];
		}
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
