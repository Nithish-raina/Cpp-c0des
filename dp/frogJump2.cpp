#include <bits/stdc++.h>
using namespace std;
int minEnergy(int ind, vector<int> &heights, int k, vector<int> &dp)
{
	// base case 
	if(ind == 0) return 0;
	if(ind == 1) return abs(heights[0] - heights[1]);
	if(dp[ind] != -1) return dp[ind];
	// recurrence relation
	int min_energy = INT_MAX;
	for(int i = 1; i <= k; i++)
	{
		if(ind - i < 0) continue;
		int energy = minEnergy(ind - i, heights, k, dp) + abs(heights[ind] - heights[ind - i]);
		min_energy = min(min_energy,energy);
	}
	return dp[ind] = min_energy;
}
int main(void)
{
	int n,k;
	cin>>n>>k;
	vector<int>heights(n);
	for(int i = 0; i < n; i++)
		cin>>heights[i];
	vector<int>dp(n,-1);
	vector<int>table(n,0);
	table[0] = 0, table[1] = abs(heights[0] - heights[1]);
	for(int ind = 2; ind < n; ind++)
	{
		int mini = INT_MAX;
		for(int i = 1; i <= k; i++)
		{
			if(ind - i < 0) continue;
			int value = table[ind - i] + abs(heights[ind] - heights[ind-i]);
			mini = min(mini,value);
		}
		table[ind] = mini;
	}
	// int res = minEnergy(n-1, heights, k, dp);
	// cout<<res<<endl;
	cout<<table[n-1]<<endl;
	return (0 == 0);
}
