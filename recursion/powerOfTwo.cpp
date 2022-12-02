#include <bits/stdc++.h>
using namespace std;
bool isPowerOfTwo(int n)
{
	while(n % 2 == 0)
	{
		n /= 2;
	}
	if(n == 1)
		return true;
	else 
		return false;
}
int main(void)
{
	int n = 1028;
	if(isPowerOfTwo(n))
		cout << "It is a power of two " << endl;
	else 
		cout << "Not a power of two " << endl;
	return 0;
}
