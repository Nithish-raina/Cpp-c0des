#include <bits/stdc++.h>
using namespace std;
int maxPoints(int dayNo, vector<vector<int>> &points, int prev, vector<int> &dp)
{
    // Base Case
    if(dayNo == 0)
    {
        int bPoint = INT_MIN;
        for(int i = 0; i<=2; i++)
        {
            if(i == prev) continue;
            bPoint = max(bPoint,points[0][i]);
        }
        return bPoint;
    }
	if(dp[dayNo] != -1) return dp[dayNo];
    // Recurrence Relation
    int maxPoint = 0;
    for(int i = 0; i <= 2; i++)
    {
        if(i == prev) continue;
        int meritPoints = points[dayNo][i] + maxPoints(dayNo-1,points,i, dp);
		maxPoint = max(maxPoint,meritPoints);
    }
	return dp[dayNo] = maxPoint;
}
int main(void)
{
    // Write your code here.
	int n;
	cin>>n;
	vector<vector<int>>points(n, vector<int>(3));
	for(int i = 0; i < n; i++)
	{
		for(int j = 0; j < 3; j++)
		{
			cin>>points[i][j];
		}
	}
	// vector<int>dp(n,-1);
	// int res = maxPoints(n-1,points,3,dp);
	vector<vector<int>>dp(n,vector<int>(4,0));
	dp[0][0] = max(points[0][1],points[0][2]);
	dp[0][1] = max(points[0][0],points[0][2]);
	dp[0][2] = max(points[0][0],points[0][1]);
	dp[0][3] = max(points[0][0],max(points[0][1],points[0][2]));
	for (int day = 1; day < n; day++) {
    for (int last = 0; last < 4; last++) {
      dp[day][last] = 0;
      for (int task = 0; task <= 2; task++) {
        if (task != last) {
          int activity = points[day][task] + dp[day - 1][task];
          dp[day][last] = max(dp[day][last], activity);
        }
      }
    }
}
	cout<<dp[n - 1][3]<<endl;
	return (0 == 0);
}
