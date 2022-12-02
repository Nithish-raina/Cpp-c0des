#include <bits/stdc++.h>
#include <unordered_map>
#include <unordered_set>
#include <vector>
using namespace std;
class Solution
{
	public:
		unordered_set<int>twoSumIndices(vector<int> &v, int target)
		{
		unordered_set<int>ov;
		unordered_map<int,int>m;
		for(int i = 0; i < v.size();i++)
		{
			int fe = target - v[i];
			if(m.find(fe) != m.end())
			{
				ov.insert(m[fe]); //paired element's index
				ov.insert(i); // current element's index
			}
			else 
			{
				m[v[i]] = i;
			}
		}
		return ov;
		}
		
};
int main(void)
{
	vector<int>iv{1,2,2,1,2};
	int target = 3;
	Solution o;
	unordered_set<int>res;
	res = o.twoSumIndices(iv,target);
	for(auto it : res)
		cout<<it<<" ";
	return 0; 
}
