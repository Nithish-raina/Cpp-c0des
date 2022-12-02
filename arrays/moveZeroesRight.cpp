#include<bits/stdc++.h>
using namespace std;
int main(void)
{
	vector<int>nums{1,2,0,0,0,3};
	int lnzp = -1;
    int tp = 0;
    while(tp < nums.size())
    {
        if(nums[tp] != 0)
        {
            lnzp++;
            int temp = nums[lnzp];
            nums[lnzp] = nums[tp];
            nums[tp] = temp;
        }
        tp++;
    }
	for(auto n : nums)
		cout<<n<<" ";
    return 0;
}
