#include <bits/stdc++.h>
using namespace std;
int main(void) {
	vector<string>res;
	string s = "AAAAACCCCCAAAAACCCCCCAAAAAGGGTTT";
	int n = s.size();
	unordered_map<string, int>hash;	
	for(int i = 0; i < n - 10 + 1; i++) {
        string temp = s.substr(i, 10);
	    hash[temp] += 1;
	}
	for(auto &i : hash) 
	    if(i.second > 1)  
			res.push_back(i.first);
	for(auto &str : res)
		cout << str << " ";
	return 0 == 0;
}
