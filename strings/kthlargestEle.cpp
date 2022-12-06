#include <bits/stdc++.h>
#include <queue>
#include <string>
using namespace std;
string findKthEle(vector<string> &nums, int k) {
	string ans = "";
	// Business logic starts here
	priority_queue<int>p;
    for(auto item : nums) {
		int no = stoi(item);
		p.push(no);
	}
	for(int i = 0; i < k - 1; i++) 
		p.pop();
	ans = to_string(p.top());
	return ans;
}
int main(void) {
	vector<string>nums{"3","6","7","10"};
	int k = 4;
	string res = findKthEle(nums, k);
	cout<<res<<endl;
	return  0 == 0;
}
