#include <bits/stdc++.h>
#include <vector>
using namespace std;
int main(void)
{
	vector<int>height{1,8,6,2,5,4,8,3,7};
	int maxArea = INT_MIN;
    int area;
    int l = 0, r = height.size() - 1;
    while(l < r)
    {
        area = min(height[l],height[r]) * (r - l);
        maxArea = max(area,maxArea);
        if(height[l] <= height[r])
            l++;
        else
            r--;
	}
	cout<<"The maximum area is " << maxArea <<endl;    
	return 0 == 0;
}
