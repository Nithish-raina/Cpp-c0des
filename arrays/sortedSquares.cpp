#include <bits/stdc++.h>
using namespace std;
int main(void)
{
	vector<int>sortedSquares(vector<int>&);
	vector<int>v{-4,-1,0,3,10};
	vector<int>res = sortedSquares(v);
	for(auto it : res)
		cout<<it<<" ";
	cout<<endl;		
}
vector<int> sortedSquares(vector<int>& nums) {
	vector<int>res(nums.size());
        int aLeft = 0;
        int aRight = nums.size() - 1;
        int resPos = res.size() - 1;
        while(aLeft <= aRight)
        {
            if(abs(nums[aLeft]) >= abs(nums[aRight]))
                res[resPos--] = nums[aLeft] * nums[aLeft++];
            else
                res[resPos--] = nums[aRight] * nums[aRight--];
        }
        return res;
}
