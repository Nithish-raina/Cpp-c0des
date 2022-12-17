#include <bits/stdc++.h>
using namespace std;
int noOfSubArrays(vector<int> &arr, int k, int threshold) {
	int count = 0, n = arr.size();
	for(int i = 0; i <= n - k; i++) {
		int wSize = 0;
        int curSum = 0;
		for(int j = i; j < n; j++) {
			wSize++;
			curSum += arr[j];
			if(wSize == k)
				break;
		}
		if((curSum / k) >= threshold) 
			count++;
	}
	return count;
}
int main(void) {
	vector<int>arr{11,13,17,23,29,31,7,5,2,3};
	int k = 3, threshold = 5;
	int res = noOfSubArrays(arr, k, threshold);
	cout<<res<<endl;
	return 0 == 0;
}
