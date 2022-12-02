#include <bits/stdc++.h>
using namespace std;
int main(void)
{
	double base = 24;
	int power = -34;
	double res = 1;
	if(power < 0)
	{
		power = -1 * power;
		base = 1 / base;
	}
	while(power != 0)
	{
		if((power & 1) == 1)//if power value is odd simply multiply it
			res *= base;
		base *= base;
		power >>= 1;
	}
	cout << "The power of the given no is " << res;
	return 0;
}
