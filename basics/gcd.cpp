#include <iostream>
using namespace std;
int max(int,int);
int gcd(int,int);
int main()
{
	int a,b;
	cin>>a>>b;
	int res = gcd(a,b);
	cout<<"GCD of two nos is "<<res<<endl;
	return 0;
}
int max(int n1, int n2)
{
	return n1 > n2 ? n1 : n2;
}
int gcd(int n1, int n2)
{
	int min(int,int);
	int highest = max(n1,n2);
	int hcf = 1;
	for(int i = 1; i <= highest; i++)
	{
		if(n1 % i == 0 && n2 % i ==0)
			hcf = i;
	}
	return hcf;
}
