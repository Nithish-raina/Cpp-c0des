#include <bits/stdc++.h>
using namespace std;
int main(void)
{
	vector<int>a{2,2,5,3,3,4,4,8,8,9,5};
	int singleEle = a[0];
	for(int i = 1; i < a.size(); i++)
	{
		singleEle ^= a[i];
	}
	cout<<"The single element in the given array is " << singleEle << endl;
	return 0;
}
