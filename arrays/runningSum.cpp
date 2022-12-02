#include <bits/stdc++.h>
#include <cstdint>
#include <vector>
using namespace std;
int main(void)
{
	vector<int16_t>no{1,2,3,4};
	for(int i = 1; i < no.size(); i++)
	{
		no[i] += no[i-1];
	}
	for(auto i : no)
		cout << i << " ";
	return 0;
}
