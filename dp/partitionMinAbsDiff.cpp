#include <bits/stdc++.h>
using namespace std;
bool hasSubsetSum(int ind, int target, vector<int> &arr, vector<vector<int>> &dp)
{
	if(target == 0) return dp[ind][target] = true;
	if(ind == 0) return dp[ind][target] = (arr[0] == target);
	if(dp[ind][target] != -1) return dp[ind][target];
	bool no = hasSubsetSum(ind-1, target, arr, dp);
	bool s = false;
	if(arr[ind]<= target)
		s = hasSubsetSum(ind-1, target - arr[ind], arr, dp);
	return dp[ind][target] = no || s;
}
int main(void)
{
	int n;
	cin>>n;
	vector<int>arr;
	for(int i = 0; i < n; i++)
		cin>>arr[i];
	int s = 0;
	for(auto i : arr)
		s += i;
	vector<vector<int>>dp(n,vector<int>(s+1,-1));
	for(int i = 0; i <= s; i++)
		bool temp = hasSubsetSum(n-1, i, arr, dp);
	int minAbs = 1e7;
	for(int i = 0; i <= s; i++)
	{
		if(dp[n-1][i] == true)
		{
			int s1 = i;
			int s2 = s - s1;
			minAbs = min(minAbs,abs(s1-s2));
		}
	}
	cout<<s<<endl;
	//cout<<minAbs<<endl;
	return (0 == 0);
}
