#include <bits/stdc++.h>
using namespace std;
int main(void)
{
	int n;
	cin >> n;
	int dCounter= 0;
	for(int i = 1; i * i <= n; i++)
	{
		if(!(n % i))
		{
			dCounter++;
			if(i != n / i)
				dCounter++;
		}
	}
	cout << "The no of divisors of the given no " << " "<< n << " " <<"is" << " " << dCounter; 
	return 0;
}
