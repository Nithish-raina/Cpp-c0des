#include <bits/stdc++.h>
#include <vector>
using namespace std;
int main(void)
{
	vector<int>v{1};
	int leftSum = 0,sum = 0,pIndex = -1;
	for(auto i : v)
	{
		sum += i;
	}
	for(int i = 0; i < v.size(); i++)
	{
		if(leftSum == sum - leftSum - v[i])
			pIndex = i;
		leftSum += v[i];
	}
	cout<<"The pivot index is " << pIndex << endl;
	return 0;
}
