#include <bits/stdc++.h>
#include <unordered_map>
#include <utility>
#include <vector>
using namespace std;
class Solution
{
	public:
		vector<pair<int,int>>twoSumPairs(vector<int>&iv,int target)
		{
			vector<pair<int,int>>vp;
			unordered_map<int,int>m;
			for(int i = 0; i < iv.size(); i++)
			{		
				if(m[target- iv[i]] > 0)
				{
					pair<int,int>p = make_pair(iv[i], target - iv[i]);
					vp.push_back(p);
					m[target - iv[i]]--;
				}
				else 
				{
					m[iv[i]]+=1;		
				}
			}
			return vp;
		}
};
int main(void)
{
	Solution o;
	vector<int>v{1,2,2,1,2}; 
	vector<pair<int,int>>res;
	res = o.twoSumPairs(v,3);
	for(auto it : res)
		cout<<"("<<it.first<<","<<it.second<<")"<<endl;
	return 0;
}
