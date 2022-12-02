#include <bits/stdc++.h>
using namespace std;
int firstPos(vector<int>& nums, int left, int right, int target)
{
    int l = left, r = right, mid;
    int firstPos = -1;
    while(l <= r)
    {
        if(nums[mid] > target)
            r = mid - 1;
        else if(nums[mid] < target)
            l = mid + 1;
        else
        {
            firstPos = mid;
            r = mid - 1;
        }
    }
    return firstPos;
}
int main(void)
{
	vector<int>nums{5,7,7,8,8,10};
	int target = 8;
	int firstIndex = firstPos(nums,0,nums.size()-1,target);
	int lastIndex;
    if(firstIndex == -1 || nums[firstIndex + 1] != target)
        firstIndex = -1,lastIndex = -1;
    // Traversing from the first occurence to find the last index
    int tPtr = firstIndex + 1;
    while(nums[tPtr] <= target)
        tPtr++;
    lastIndex = tPtr - 1;
	cout<<"O/p "<<	firstIndex << " " << lastIndex << endl; 
	return 0 == 0;
}
