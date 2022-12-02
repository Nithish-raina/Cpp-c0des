#include <bits/stdc++.h>
using namespace std;
int main(void)
{
	vector<int>nums{1,2,3,4,5,6,7};
	int k = 3;
	k %= nums.size();
    reverse(nums.begin(),nums.end());
    reverse(nums.begin(),nums.begin() + k);
    reverse(nums.begin() + k, nums.end());
	for(auto it : nums)
		cout << it << " ";
	return 0;
}
// last k elements are the first k elements in the right rotation and vice-versa
