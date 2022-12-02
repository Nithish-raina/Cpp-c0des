#include <algorithm>
#include <climits>
#include <iostream>
#include <bits/stdc++.h>
#include <vector>
using namespace std;
int main()
{
	vector<int>prices{2,4,1,4};
	int minPrice = INT_MAX;
	int maxProfit = 0;
	for(int i = 0; i < prices.size(); i++)
	{
		if(prices[i] < minPrice)
			minPrice = prices[i];
		else if(prices[i] - minPrice > maxProfit)
			maxProfit = prices[i] - minPrice;
	}
	cout<<"The max Profit is " << maxProfit <<endl;
	return 0 == 0;
}
