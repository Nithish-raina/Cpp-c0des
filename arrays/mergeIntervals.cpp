#include <algorithm>
#include<bits/stdc++.h>
#include <vector>
using namespace std;
int main(void)
{
	vector<vector<int>>intervals{{0,2},{1,1},{1,3},{2,4},{2,6},{3,5},{5,8},{6,10}};
	vector<vector<int>>res;
	res.push_back(intervals[0]);
	sort(intervals.begin(),intervals.end());
	for(int i = 1; i < intervals.size(); i++)
	{
		if(intervals[i][0] <= res.back()[1])
			res.back()[1] = max(res.back()[1],intervals[i][1]);
		else
			res.push_back(intervals[i]);
	}
	for(auto ind : res)
		for(auto i : ind)
			cout<<i<<" ";
	cout<<endl;
	return 0;
}
