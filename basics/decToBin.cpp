#include<iostream>
using namespace std;
int decToBin(int);
int main()
{
	int dec;
	cin>>dec;
	int bin = decToBin(dec);
	cout<<"The binary equivalent to the given decimal integer is "<<bin<<endl;
	return 0;
}
int decToBin(int dec)
{
	int b = 0;
	int arr[100];
	int i = 0;
	while(dec != 0)
	{
		arr[i] = dec % 10;
		dec /= 10;
	}
	for(int i = 0; i <= )
}
