#include<iostream>
using namespace std;
int min(int,int);
int lcm(int,int);
int main()
{
	int a,b;
	cin>>a>>b;
	int res = lcm(a,b);
	cout<<"The lcm of 2 nos is "<<res<<endl;
	return 0;
}
int min(int n1,int n2)
{
	return n1 < n2 ? n1 : n2; 
}
int lcm(int n1,int n2)
{
	int lc = 1;
	int start = min(n1,n2);
	int end = n1 * n2;
	for(int i = start; i<= end; i++)
	{
		if(n1 % i == 0 && n2 % i ==0)
			lc = i;
	}
	return lc;
}
