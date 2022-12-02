#include <bits/stdc++.h>
#include <cstdint>
#include <string>
using namespace std;
vector<string>temp;
string path = "";
void trackWays(int i, int n)
{
	
	if(i == n) 
	{
		temp.push_back(path);
		return;
	}
	if(i+1 <= n)
	{
		path += to_string(i+1);
		trackWays(i + 1, n);
		path.pop_back();
	}
	if(i+2 <= n)
	{
		path += to_string(i+2);
		trackWays(i + 2, n);
		path.pop_back();
	}
}
int countWays(int i, int n)
{
	vector<int>dp(n+1,0);
	dp[1] = 1, dp[2] = 2;
	for(int i = 3; i <=n ; i++)
	{
		dp[i] = dp[i-1] + dp[i-2];
	}
	return dp[n];
}
int main(void)
{
	int n; // [1,45]
	cin>>n;
	trackWays(0, n);
	cout<<"The no of distinct ways to reach " << n << " stairs is" << " " <<countWays(0, n)<<"\n";
	cout<<"The ways are ";
	for(auto i : temp)
		cout<<i<<" ";
	cout<<"\n";
}
