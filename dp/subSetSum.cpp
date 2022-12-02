#include<bits/stdc++.h>
using namespace std;
bool hasSubset(int ind, int k, vector<int> &arr, vector<int> &dp)
{
    if(k == 0) return true;
    if(ind == 0)
    {
        if(arr[ind] == k) return true;
        else return false;
    }
	if(dp[ind] != -1) return dp[ind];
    // not pick
    bool notPick = hasSubset(ind-1,k,arr,dp);
    bool pick = false;
    if(arr[ind] <= k)
        pick = hasSubset(ind-1,k-arr[ind],arr,dp);
    return pick | notPick;
}
int main(void) {
    // Write your code here.
	int n,k;
	cin>>n>>k;
	vector<int>arr(n);
	vector<int>dp(n,-1);
	for(int i = 0; i < n; i++)
		cin>>arr[i];
    // bool res = hasSubset(n-1, k, arr, dp);
	// cout<<res<<endl;
	/*Tabulation starts here */
	vector<vector<bool>>table(n,vector<bool>(k+1,false));
	for(int i = 0; i < n; i++)
		table[i][0] = true;
	for(int i = 0; i < n; i++)
		if(arr[i] <= k) table[0][arr[i]] = true;
	for(int ind = 1; ind < n; ind++)
	{
		for(int target = 1; target <= k; target++)
		{
			bool no = table[ind-1][target];
			bool s = false;
			if(arr[ind] <= target)
				s = table[ind-1][target - arr[ind]];
			table[ind][target] = no | s;
		}
	}
	cout<<table[n-1][k]<<endl;
	/* Tabulation ends here */
	return (0 == 0);
}
