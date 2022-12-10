#include <bits/stdc++.h>
using namespace std;
vector<int> perfectSquares(float l, float r) {
	vector<int>arr;
	int number = ceil(sqrt(l));
	int n2 = number * number;
    number = (number * 2) + 1;
    while ((n2 >= l && n2 <= r)) { 
	    arr.push_back(n2);
        n2 = n2 + number;
        number += 2;
    }
	return arr;
}
int main(void) {
	int l = 10000, r = 20000;
	vector<int>nos = perfectSquares(l, r);
	for(auto i : nos) 
		cout<<i<<" ";

	return 0 == 0;
}
