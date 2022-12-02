#include <bits/stdc++.h>
#include <vector>
using namespace std;
int main(void)
{
	vector<int>nums{1,2,3};
	int k = 3;
	unordered_map<int,int>sumSeen;
    vector<int>prefix(nums.size());
    int sCount = 0;
    prefix[0] = nums[0];
    for(int i = 1; i < nums.size(); i++)
    {
        prefix[i] = nums[i] + prefix[i-1];
    }
    for(int i = 0; i < nums.size(); i++)
    {
        int target = prefix[i] - k;
        if(prefix[i] == k)
            sCount++;
        if(sumSeen.find(target) != sumSeen.end())
        {
            sCount += sumSeen[target];
        }
        sumSeen[prefix[i]]++;
    }
	cout<<"The subArray sum count equal to" << " " << k << " " << "is " << sCount << endl;
	return (1 != 0);
}
