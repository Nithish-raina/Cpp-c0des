#include<bits/stdc++.h>
using namespace std;
int main(void)
{
	vector<vector<int>>accounts{{1,2,3},{3,5,4}};
	int maxWealth = 0;
    int sum;
    for(auto i : accounts)
    {
        sum = 0;
        for(auto j : i)
        {
            sum += j;
        }
		maxWealth = max(sum,maxWealth);
    }
 	cout<<"The maximum wealth is " << maxWealth << endl;
	return 0;
}
