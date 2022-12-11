#include <bits/stdc++.h>
#include <csignal>
#include <string>
using namespace std;
bool matchPattern(int no, string &s2) {
	string s1 = to_string(no);
	int ptr = 0;
	while(ptr++ < s2.size()) {
		if(s2[ptr] == '_') continue;
		if(s1[ptr] != s2[ptr])
			return false;
	}
	return true;
}
void getPsquares(float l, float r, vector<int> &pSquaresInRange) {
	int number = ceil(sqrt(l));
	int n2 = number * number;
    number = (number * 2) + 1;
    while ((n2 >= l && n2 <= r)) { 
	    pSquaresInRange.push_back(n2);
        n2 = n2 + number;
        number += 2;
    }
}
int largestPerfectSquare(string &s) {
	string rangeStart = "";
	string rangeEnd = "";
	rangeStart += s[0];
	rangeEnd += s[0] + 1;
	int count = 0;
	while(count++ < s.size()-1) {
		rangeStart += '0';
	}
	count = 0;
	while(count++ < s.size() - 1) {
		rangeEnd += '0'; 
	}
	vector<int>pSquaresInRange;
	getPsquares(stoi(rangeStart), stoi(rangeEnd), pSquaresInRange);
	vector<int>finArr;
	for(int i = 1; i < pSquaresInRange.size(); i++) {
	    if(matchPattern(pSquaresInRange[i], s)) {
			finArr.push_back(pSquaresInRange[i]);
		}	
	}
	int ans = -1e9;
    for(auto i : finArr) 
		ans = max(ans, i);
	return ans;
}
int main(void) {
	string s = "12_4_9";
	int res = largestPerfectSquare(s);
	cout<<res<<endl;
	return 0 == 0;
}
