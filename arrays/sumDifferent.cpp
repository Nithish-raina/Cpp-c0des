#include <bits/stdc++.h>
#include <unordered_map>
using namespace std;
int findElement(vector<int>&arr)
{
	unordered_map<int,int>arrEle;
	for(int i = 0; i < arr.size(); i++)
		arrEle[arr[i]] = i;
	//computing sum of elements
	int sum = 0;
	for(auto i : arr)
		sum += i;
	if(arrEle[sum / 2])
	return 1;
}
int main(void)
{
	vector<int>arr{5,2,1,2};
	int res = findElement(arr);
	cout<<endl;
	return 0 == 0;
}
