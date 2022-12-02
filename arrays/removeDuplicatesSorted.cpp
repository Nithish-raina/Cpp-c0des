#include <algorithm>
#include <bits/stdc++.h>
using namespace std;
int main(void)
{
	vector<int>v{0,0,0,1,1,2,2,3};
	unique(v.begin(),v.end());
	for(auto v : v)
		cout<<v<<" ";
	return 0;
}
