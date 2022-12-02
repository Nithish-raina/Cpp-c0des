/* 
* Print the divisors of the given integer n 
* n belongs to the positive integer set (Z - {0})
*/
#include <iostream>
using namespace std;
int main()
{
	int n;
	cin>>n;
	void divisors(int);
	cout<<"Divisors of the no "<<n<<" are"<<endl;
	divisors(n);
	return 0;
}
void divisors(int no)
{
	int i;
	for(i = 1; i <= no; i++) // avoid using i = 0 for floating point exception with modular arithmetic
	{
		if(no % i == 0)
			cout<<i<<" ";
	}
}
