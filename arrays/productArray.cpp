#include <bits/stdc++.h>
#include <vector>
using namespace std;
int main(void)
{
	vector<int>nums{-1,1,0,-3,3};
	vector<int>res(nums.size());
	int zeroCount = count(nums.begin(),nums.end(),0);
	int product = 1;
	if(zeroCount > 1)
		res = {0};
	for(auto i : nums)
	{
		if(i != 0)
			product *= i;
	}
	for(int i = 0; i < nums.size(); i++)
	{
		if(zeroCount)
		{
			if(nums[i] != 0)
				nums[i] = 0;
			else
				nums[i] = product;
		}
		else
			nums[i] = product / nums[i];
	}
	for(auto i : nums)
		cout<<i<<" ";
	return 0;
}
