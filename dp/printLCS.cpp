#include <bits/stdc++.h>
using namespace std;
int main(void)
{
	string text1 = "abe";
	string text2 = "abdec";
	int m = text1.size(),n = text2.size();
	vector<vector<int>>dp(m+1,vector<int>(n+1,0));
    for(int i = 1; i <= m; i++)
    {
		for(int j = 1; j <= n; j++)
        {
            if(text1[i-1] == text2[j-1]) dp[i][j] = 1 + dp[i-1][j-1];
            else dp[i][j] = max(dp[i][j-1], dp[i-1][j]);
        }
    }
    // cout<<dp[m][n]<<endl;
	string res = "";
	while(m >= 0 || n >= 0)
	{
		if(text1[m-1] == text2[n-1])
		{
			res += text1[m];
			m--;
			n--;
		}
		else if(dp[m][n-1] > dp[m-1][n])
			n--;
		else
			m--;
	}
	reverse(res.begin(),res.end());
	cout<<res<<endl;
	return (0 == 0);
}
