#include<iostream>
using namespace std;
int main()
{
	int bin;
	cin>>bin;
	int binToDec(int);
	int dec = binToDec(bin);
	cout<<"The decimal equivalent of the number is "<<dec;
	return 0;
}
int binToDec(int b)
{
	int decimal = 0;
	int base = 1;
	while(b != 0)
	{
		int lastDigit = b % 10;
		decimal = decimal + (lastDigit * base);
		b /= 10;
		base *= 2;
	}
	return decimal;
}
