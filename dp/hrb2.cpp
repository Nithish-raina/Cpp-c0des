#include <bits/stdc++.h>
using namespace std;
int maxAmt(int start, int end, vector<int> &nums, vector<int> &dp)
    {
        if(end == start) return nums[0];
        if(end < start) return 0;
        if(dp[end] != -1 ) return dp[end];
        int notRob = 0 + maxAmt(start, end - 1, nums, dp);
        int rob = nums[end] + maxAmt(start, end - 2, nums, dp);
        dp[end] = max(notRob,rob);
        return dp[end];
    }
int main() {
        // if(nums.size() == 1) cout<<nums[0]<<endl;
		vector<int>nums{200,3,140,20,10};
        vector<int>dp1(nums.size(),-1);
		vector<int>dp2(nums.size(),-1);
		int res1 = maxAmt(0, nums.size()-2, nums, dp1);
		int res2 = maxAmt(1, nums.size()-1, nums, dp2);
		cout<<max(res1,res2)<<endl;
		return 0 == 0;    
    }
