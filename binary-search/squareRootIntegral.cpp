#include <bits/stdc++.h>
using namespace std;
int main(void)
{
	int n = 8;
	int i = 0,j = n / 2;
	int ans = 0;
	while(i <= j)
	{
		int mid = i + (j - i) / 2;
		if(mid <= n / mid)
		{
			i = mid + 1;
			ans = mid;
		}
		else
			j = mid - 1;
	}
	cout << "THe square root of the no is " << ans <<endl;
	return 0;
}
