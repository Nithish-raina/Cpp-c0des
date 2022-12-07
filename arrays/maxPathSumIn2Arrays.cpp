class Solution {
public:
    int maxSum(vector<int>& nums1, vector<int>& nums2) {
        int mod = 1e9 + 7;
        int i = 0, j = 0;
        long long int sum1 = 0, sum2 = 0;
        int m = nums1.size(), n = nums2.size();
        while(i < m && j < n) {
        
        if(nums1[i] < nums2[j])
            sum1 += nums1[i++];
        else if(nums1[i] > nums2[j])
            sum2 += nums2[j++];
        else { 
            sum1 += nums1[i];
            sum2 += nums2[j];
         
            int maxsum = max(sum1, sum2);
            sum1 = maxsum % mod;
            sum2 = maxsum % mod;
            i++;
            j++;
        }
    }
    
    while(i < m)
        sum1=sum1+nums1[i++];
    while(j < n)
        sum2=(sum2+nums2[j++]);

    return (max(sum1, sum2)) % mod;   
    }
};
