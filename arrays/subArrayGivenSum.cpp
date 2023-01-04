#include <bits/stdc++.h>
using namespace std;
vector<int>findSubArray(vector<int> &arr, int sum) {
	vector<int>ans;
	int curSum = arr[0], windowStart = 0;
	for(int windowEnd = 1; windowEnd < arr.size(); windowEnd++) {
		curSum += arr[windowEnd];
		if(curSum > sum) {
			curSum -= arr[windowStart];
			windowStart++;
		}
		if(curSum == sum) {
			ans.push_back(windowStart + 1);
			ans.push_back(windowEnd + 1);
		}
	}
	return ans;
}
int main(void) {
	vector<int>arr{42,468,135, 101, 170, 125, 79, 159, 163, 65, 106, 146, 82, 28, 162, 92, 196, 143, 28, 37, 192, 5, 103, 154, 93, 183, 22, 117, 119, 96, 48, 127, 172, 139, 70, 113, 68, 100, 36, 95, 104, 12, 123, 134};
	int sum = 468;
	vector<int>res = findSubArray(arr, sum);
	for(auto &i : res)
		cout << i << " ";
	return 0 == 0;
}
