#include <bits/stdc++.h>
#include <vector>
using namespace std;
int main(void)
{
	vector<int>nums{-4,-1,0,3,9,10};
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
	cout<<"The sorted squared array is " << endl;
	for(auto it : res)
		cout << it << " ";
	return 0;
}
