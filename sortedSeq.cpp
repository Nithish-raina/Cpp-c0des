// Have to revcover it using recursion or dp or may be memoization
#include <bits/stdc++.h>
using namespace std;
vector<int>findSubs(vector<int> &arr, int index, vector<int> &seq) {
	
	// Baseyyyy case
	int n = arr.size();

	if(index >= n)
		return {};

    if(seq.size() == 3) 
		return seq;

	// Pick condition
	if(seq.size() == 0) {
		seq.push_back(arr[index]);
		findSubs(arr, index + 1, seq);
	}
	else{
        int lastEle = seq.back();
		if(arr[index] > lastEle) 
			seq.push_back(arr[index]);
		findSubs(arr, index + 1, seq);
	}

	// Non-pick Condition 
	seq.pop_back();
	findSubs(arr, index + 1, seq);
	return {};
}
int main(void) {
	vector<int>arr{1,2,1,1,3};
	vector<int>seq;
	vector<int>res = findSubs(arr, 0, seq);
	for(auto i : res) 
		cout<< i << " ";
	return 0 == 0;
}
