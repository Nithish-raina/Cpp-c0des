#include <algorithm>
#include <bits/stdc++.h>
#include <unordered_map>
#include <unordered_set>
#include <utility>
#include <vector>
using namespace std;
int main(void)
{
	vector<int>nums{-1,0,1,2,-1,-4};
	unordered_map<int,int>seen;
	set<int>s;
	for(auto i : nums)
			seen[i]++;
	for(int i = 0; i < nums.size();i++)
	{
		seen[nums[i]] -= 1;
		for(int j = i+1; j < nums.size();j++)
		{
			seen[nums[j]] -= 1;
			int target = -(nums[i] + nums[j]);
			if(seen.find(target) != seen.end()) 
			{
				s.insert({nums[i],nums[j],target});
			}
			seen[nums[j]] += 1;
		}
		seen[nums[i]] += 1;
	}
	for(auto i : s)
			cout<<i<<" ";
	return 0;
}
