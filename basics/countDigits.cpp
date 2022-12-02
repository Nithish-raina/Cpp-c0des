#include <cstdlib>
#include <iostream>
using namespace std;
int countDigits(int n)
{
	int count = 0;
	while(n != 0)
	{
		n /= 10;
		++count;
	}
	return count;
}
int main()
{
	int n;
	cin>>n;
	int res = countDigits(n);
	cout<<"The no of digits for the given integer is "<<res<<endl;
	return 0;
}
