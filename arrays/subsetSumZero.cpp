#include <bits/stdc++.h>
using namespace std;
vector<vector<int>>ans;
void findSubsets(int ind, vector<int> &list, vector<int> &arr, int sum) {
	if(ind == arr.size()) {
		if(sum == 0 && list.size() > 0) {
			ans.push_back(list);
			return;
		}
		else 
		    return;
	}
	// pick 
	list.push_back(arr[ind]);
	findSubsets(ind + 1, list, arr, sum + arr[ind]);
	list.pop_back();
	findSubsets(ind + 1, list, arr, sum);
}
vector<int> getSubset(vector<int> &arr) {
	vector<int>res;
	vector<int>list;
	findSubsets(0, list, arr, 0);
	if(ans.size() > 0) {
		for(int i = 0; i < ans[0].size(); i++) 
			res.push_back(ans[0][i]);
	}
	else 
		res = {};
	return res;
}
int main(void) {
	int n;
	cout<<"Enter the size of the array : "<<endl;
	cin>>n;
	vector<int>arr(n);
	cout<<"Enter the elements of the array : " << endl; 
	for(int i = 0; i < n; i++)
		cin>>arr[i]; 
	vector<int>items = getSubset(arr);
	if(items.size() > 0) {
		for(auto i : items)
			cout<<i<<" ";
	}
	else {
		cout<<"No elements are found"<<endl;
	}
	return 0 == 0;
}
