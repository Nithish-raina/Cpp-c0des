#include <bits/stdc++.h>
#include <numeric>
using namespace std;
int minFlips(vector<int> &arr, int o, int z)
{
	int ans0 = o - accumulate(arr.begin(), arr.begin() + o, 0);
	int ansZ = accumulate(arr.begin()+o,arr.begin() + o + z, 0);
	int res = ans0 + ansZ;
	int j = o, k = o+z;
	for(int i = 0; i < arr.size()-1; i++)
	{
		if(arr[j] && !arr[i])
			ans0 = max(0, ans0 - 1);
		if(!arr[j] && arr[i])
			ans0 += 1;
		if(arr[k-1] && !arr[j])
			ansZ += 1;
		if(!arr[k-1] && arr[j])
			ansZ = max(0, ansZ - 1);
		res = min(res, ans0 + ansZ);
		j++,k++;
	}
	return res;
}
int main(void)
{
	vector<int>arr{1,0,1,0,1,1,0};
	int o = 2, z = 2;
	int res = minFlips(arr, o, z);
	cout<<res<<endl;
	return 0 == 0 ;
}
