/*
 * Find the prime factorized form of the given number 
*/
#include <iostream>
#include <cmath>
int isPrime(int);
void factorize(int);
using namespace std;
int main()
{
	int n;
	cin>>n;
	cout<<"The factorized form of the given no is "<<endl;
	factorize(n);
	return 0;
}
int isPrime(int a)
{
	for(int i = 2; i < a; i++)
	{
		if(a % i == 0)
			return 0;
	}
	return 1;
}
void factorize(int a)
{
	for(int i = 2; i <= a; i++)
	{
		int f;
		if(isPrime(i))
			f = i;
		while(a % f == 0)
		{
			cout<<i<<" ";
			f = f * i;
		}
	}

}

