#include <bits/stdc++.h>
#include <queue>
using namespace std;
int main(void) {
    vector<int>arr{1,2,3,4,5,6,7};
	priority_queue<int>pq(arr.begin(),arr.end());
	for(int i = 0; i < 2; i++) {
		pq.pop();
	}
	cout<<pq.top();
	return 0 == 0;
}
