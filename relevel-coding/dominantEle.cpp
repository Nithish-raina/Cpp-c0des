#include <bits/stdc++.h>
using namespace std;
int domEle(vector<int> &arr, int n)
{
	sort(arr.begin(),arr.end());
	int count = 0;
	for(auto i : arr)
	{
		if(arr[n-1] < i + n - 1)
			count++;
	}
	return count;
}
int main(void)
{
	int t;
	cin>>t;
	vector<int>resultant(t);
	int ptr = 0;
	while(t--)
	{
		int n;
		cin>>n;
		vector<int>arr(n);
		for(int i = 0; i < n; i++)
			cin>>arr[i];
		int res = domEle(arr,n);
		resultant[ptr++] = res;
	}
	for(auto i : resultant)
		cout<<i<<endl;
	return 0 == 0;
}
