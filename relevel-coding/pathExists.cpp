#include <bits/stdc++.h>
using namespace std;
int pathExists(int a, int b, int k)
{
	return (abs(a-b)) >= k ? 1 : 0;
}
int main(void)
{
	int t; //no of test cases 
	// cout<<"No of test cases"<<endl;
	cin>>t;
	vector<int>res; //resultant array
	while(t--)
	{
		// cout<<"Enter n,k,q"<<endl;
		int n,k,q;
		cin>>n>>k>>q;
		while(q--)
		{
			int c1,c2,op;
			cin>>c1>>c2;
			op = pathExists(c1,c2,k);
			res.push_back(op);
		}
	}
	for(auto i : res)
		cout<<i<<endl;
	return (0 == 0);
}
