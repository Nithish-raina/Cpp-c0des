#include <algorithm>
#include <bits/stdc++.h>
#include <string>
using namespace std;
// recursive
int minEnergy(int ind, vector<int> &heights)
{
	if(ind == 0) return 0;
	if(ind == 1) return abs(heights[0] - heights[1]);
	int moveOne = minEnergy(ind-1, heights) + abs(heights[ind] - heights[ind-1]);
	int moveTwo = minEnergy(ind-2, heights) + abs(heights[ind]- heights[ind-2]);
	return min(moveOne,moveTwo);
}
int main(void)
{
	int n;
	cin>>n;
	vector<int>heights(n);
	for(int i = 0; i < n; i++)
	{
		cin>>heights[i];
	}
	// int res = minEnergy(n-1,heights);
	vector<int>dp(n,0);
	vector<int>path(n,0);
	dp[0] = 0, dp[1] = abs(heights[0] - heights[1]); 
	for(int i = 2; i < n; i++)
	{
		int one = dp[i-1] + abs(heights[i] - heights[i-1]);
		int two = dp[i-2] + abs(heights[i] - heights[i-2]);
		dp[i] = min(one,two);
		path[i] = (two <= one) ? i - 2 : i - 1;
	}
	cout<<dp[n-1]<<endl;
	int index = n-1;
	string ways = to_string(n);
	while(path[index] != index)
	{
		ways += to_string(path[index]+1); //1-indexed value
		index = path[index];
	}
	reverse(ways.begin(),ways.end());
	cout<<"The path is " << ways << endl;
	cout<<endl;
	return 0 == 0;
}
