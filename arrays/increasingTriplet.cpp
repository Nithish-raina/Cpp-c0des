class Solution {
public:
    bool increasingTriplet(vector<int>& nums) {
        int first = INT_MAX;
        int mid = INT_MAX;
        for(int i = 0; i < nums.size(); i++) {
            if(nums[i] > mid)
                return true;
            else if(nums[i] > first && nums[i] <= mid) 
                mid = nums[i];
            else if(nums[i] <= first) 
                first = nums[i];
        }
        return false;      
    }
};
