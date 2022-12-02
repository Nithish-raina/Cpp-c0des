#include<bits/stdc++.h>
using namespace std;
int main(void)
{
	vector<int>arr{1,2,0,0,0,3};
	int n = arr.size();
	int fnzp = n;
	int tp = n - 1;
	while(tp >= 0)
	{
		if(arr[tp] != 0)
		{
			fnzp--;
			int temp = arr[fnzp];
			arr[fnzp] = arr[tp];
			arr[tp] = temp;
		}
	tp--;
	}
	for(int n:arr)
		cout<<n<<" ";
	return 0;
}
