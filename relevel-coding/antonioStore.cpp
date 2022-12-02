// Antonio's store 
#include <algorithm>
#include <bits/stdc++.h>
#include <cmath>
using namespace std;
int minK(vector<int> &container, int extras)
{
	int maximal = *max_element(container.begin(), container.end());
	int n = container.size();
	int spacesLeft = maximal * n - accumulate(container.begin(), container.end(), 0);
	int k = maximal;
	if(spacesLeft > extras) return maximal;
	else
	{
		int remaining = extras - spacesLeft;
		k += floor(remaining / n) + (remaining % n == 0 ? 0 : 1);
	}
	return k;
}
int main(void)
{
	int n,m;
	cin>>n>>m;
	vector<int>container(n);
	for(int i = 0; i < n; i++)
		cin>>container[i];
	cout<<minK(container,m);
	return 0 == 0;
}

