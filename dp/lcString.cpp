#include <bits/stdc++.h>
using namespace std;
int main(void)
{
	string s1 = "qwertrb";
	string s2 = "fbtrb";
	int m = s1.size(), n = s2.size();
	int res = INT_MIN;
	vector<vector<int>>dp(m+1,vector<int>(n+1,0));
	for(int i = 1; i <= m; i++)
	{
		for(int j = 1; j <= n; j++)
		{
			if(s1[i-1] == s2[j-1])
			{
				dp[i][j] = 1 + dp[i-1][j-1];
				res = max(res,dp[i][j]);
			}
			else dp[i][j] = 0;
		}
	}
	cout<<res<<endl;
	return 0 == 0;
}
