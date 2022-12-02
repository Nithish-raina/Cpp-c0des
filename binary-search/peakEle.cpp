#include <bits/stdc++.h>
#include <vector>
using namespace std;
int main(void)
{
	vector<int>nums{1,2,3,2,1};
	int l = 0,r = nums.size() - 1;
    while(l < r)
    {
        int mid = l + (r - l) / 2;
        if(nums[mid] > nums[mid + 1])
            r = mid;
        else
            l = mid + 1;
    }
    return l;
}
