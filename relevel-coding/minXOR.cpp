#include <algorithm>
#include <bits/stdc++.h>
using namespace std;
int minPairs(vector<int> &arr) {
	int count = 0;
	if(arr.size() == 1) 
		return count;
	for(int i = 0; i < arr.size(); i++) {
		for(int j = i+1; j < arr.size(); j++) {
			int minOfTwo = min(arr[i], arr[j]);
			int xorRes = arr[i] ^ arr[j];
			if(xorRes <= minOfTwo)
				count++;
		}
	}
	return count;
}
int main(void) {
	int t;
	cin>>t;
	int res[t];
	int ptr = 0;
	while(t--) {
		int n;
		cin>>n;
		vector<int>arr(n);
		for(int i = 0; i < n; i++) {
			cin>>arr[i];
		}
        int ans = minPairs(arr);
		res[ptr++] = ans;
	}
	for(auto i : res) 
		cout<<i<<endl;
	return 0;
}
