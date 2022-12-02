#include <bits/stdc++.h>
#include <numeric>
using namespace std;
vector<long long>exponents{1, 2, 4, 8, 16, 32, 64, 128, 256, 512, 1024, 2048, 4096, 8192, 16384, 32768, 65536, 131072};
class Solution
{
public:
	int nearestExp(int sum)
	{
		for(auto i : exponents)
		{
			if(sum == i)
				return 0;
			if(sum < i)
				return i - sum;
		}
		//return -1;
	}
	int minOneReq(vector<int> &arr)
	{
		int ans = 1e5;
		int n = arr.size();
		int tSum = accumulate(arr.begin(),arr.end(),0);
	// sum1 - sum of 1st subarray, res1 - no of ones required for 1st subarray
		int sum1 = 0, res1 = 1;
	// loop for partitioning for 1st array
		for(int i = 0; i < n-1; i++)
		{
			if(arr[i] < res1)
			{
				sum1 += arr[i];
				res1 -= arr[i]; 
			}
			else 
			{
				sum1 += arr[i];
				res1 = nearestExp(sum1);
			}
			int sum2 = 0,res2 = 1;
			//int sum3 = tSum - sum1;
			for(int j = i+1; j < n; j++)
			{
				if(arr[j] < res2)
				{
					sum2 += arr[j];
					res2 -= arr[j];
				}
				else
				{
					sum2 += arr[j];
					res2 = nearestExp(sum2);
				}
				int sum3 = tSum - (sum1 + sum2);
				int res3 = nearestExp(sum3);
				ans = min(ans, res1 + res2 + res3);
			}

		}
		return ans;
	}
};
int main(void)
{
	int t;
	cin>>t; // no of test cases
	vector<int>resultant(t); // ans array for t test cases
	while(t--)
	{
		int n;  // size of the array
		cin>>n;
		vector<int>arr(n);
		for(int i = 0; i < n; i++)
			cin>>arr[i];
		Solution ob;
		int res = ob.minOneReq(arr);
		//cout<<res<<endl;
		resultant.push_back(res);
	}
	// displaying all the results of t test cases
	for(auto i : resultant)
		cout<<i<<endl;
	//vector<int>arr{1,2,3,5};
	//int res = minOneReq(arr);
	//cout<<res;
	return (0 == 0); 
}
