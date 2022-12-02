#include <bits/stdc++.h>
using namespace std;
int findSubsets(int ind, int sum, int target, vector<int> &a, int n)
{
	if(ind == n)
	{
		if(sum == target || sum + a[ind] == target) return 1;
		else return 0;
	}
	int no = findSubsets(ind+1,sum,target,a,n);
	int s = 0;
	if(a[ind] <= target)
		s = findSubsets(ind+1,sum+a[ind],target,a,n);
	return s + no;
}
int main(void)
{
	vector<int>a{0,0,1};
	int target = 1;
	int n = a.size();
	int res = findSubsets(0,0,target,a,n-1);
	cout<<res<<endl;
	return 0==0;
}
