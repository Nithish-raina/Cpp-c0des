#include <bits/stdc++.h>
#include <type_traits>
using namespace std;
int longestSeq(vector<int> &arr, int X, int Y)
{
	int count = 0;
	int res = -1e8;
	int prevSum = 0;
	for(int i = 0; i < arr.size(); i++)
	{
		prevSum += arr[i];
		if(prevSum + Y * arr[i] == X)
		{
			count++;
			res = max(res, count);
		}
		else
			count = 0;
	}
	return res;
}
int main(void)
{
	int t;
	cin>>t;
	vector<int>resultant(t);
	int ptr = 0;
	while(t--)
	{
		int n;
		cin>>n;
		vector<int>arr(n);
		for(int i = 0; i < n; i++)
			cin>>arr[i];
		int x,y;
		cin>>x>>y;
		int res = longestSeq(arr, x, y);
		resultant[ptr++] = res;
	}
	for(auto &i : resultant)
		cout<<i<<endl;
	return 0 == 0;
}
