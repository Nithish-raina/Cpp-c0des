#include <bits/stdc++.h>
using namespace std;
int main(void)
{
	vector<int>prices{7,5,6,8,3,2};
	int profit = 0;
	for(int i = 1; i < prices.size(); i++)
	{
		if(prices[i-1] < prices[i])
			profit += prices[i] - prices[i-1];
	}
	cout<<"the max profit is " << profit;
	return 0;
}
