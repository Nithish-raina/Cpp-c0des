#include <bits/stdc++.h>
#include <cstdint>
#include <vector>
int main(void)
{
	using std::cout;
	using std::endl;
	std::vector<int>nums{0,1,0,3,12};
	int lnzp = -1;
    uint16_t tp = 0;
    while(tp < nums.size())
    {
		if(nums[tp] != 0)
            std::swap(nums[++lnzp],nums[tp]);
        tp++;
    }
	for(auto it : nums)
		cout<<it<<" ";
	cout<<endl;
	return 0;
}
