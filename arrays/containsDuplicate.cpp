#include<bits/stdc++.h>
#include <unordered_set>
#include <vector>
using namespace std;
/* Approach 1 S(n) = O(N) */
int main(void)
{
	vector<int>nums{1,2,3,1};
	unordered_map<int,int>map;
	bool containsDp = false;
        for(int n : nums)
        {
            if(map[n])
				containsDp = true;
			else
                map[n] = 1;
        }
        cout<<containsDp<<endl;
	return 0;
}
/* Approach 2 with S(n) = O(N) Using sets */
bool containsDuplicate(vector<int>&v)
{
	unordered_set<int>s;
	for(int n : v)
	{
		if(s.count(n) >= 1) 
			return true; 
		else
			s.insert(n);
	}
	return false;
}
