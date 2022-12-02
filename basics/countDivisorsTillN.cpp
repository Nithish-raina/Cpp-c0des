#include <bits/stdc++.h>
using namespace std;
// Approach 1 --> Iterate on each value <= sqrt(n)
int countDivisors(int n)
{
	int dCounter = 0;
	for(int i = 1; i * i <= n; i++)
	{
		if(!(n % i))
		{
			dCounter++;
			if(i != n / i)
				dCounter++;
		}
			
	}
	return dCounter;
}
int main(void)
{
	int n;
	cin>>n;
	vector<int>divisors(n + 1,0);
	for(int i = 1; i <= n; i++)
	{
		// cout << i << " " << "-- >" << countDivisors(i) <<endl;
		// Approach 2 --> Iterate on the mutiples of each entry and update it using a vector
		for(int j = i; j <= n; j += i)
		{
			 divisors[j]++;
		}
	}
	for(int i = 1; i < divisors.size(); i++)
	{
		cout << i << " " << "-->" << divisors[i] << endl;
	}
	return 0;
}
