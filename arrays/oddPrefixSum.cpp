#include <algorithm>
#include <bits/stdc++.h>
using namespace std;
//returns first odd element's index
bool isOdd(int a)
{
	if(a % 2 == 0)
		return false;
	return true;
}
int evenOddArray(vector<int>&arr)
{
	//splitting array into even.....odd elements
	int foe = arr.size();
	int tp = arr.size() - 1;
	while(tp >= 0)
	{
		if(isOdd(arr[tp]))
			swap(arr[tp],arr[--foe]);
		tp--;
	}
	return foe;
}
int maxCount(void)
{
	//input array....U can also pass input array from main and do the operation
	vector<int>arr{1,1,1,2,2};
	int firstOddIndex = evenOddArray(arr);
	sort(arr.begin(),arr.begin()+firstOddIndex);
	sort(arr.begin()+firstOddIndex,arr.end());
	for(auto i : arr)
		cout<<i<<" ";
	cout<<endl;
	// condition check for all even elements
	if(firstOddIndex == arr.size())
		return 0;   // For all even elements odd prefixes is always 0
	vector<int>transformed(arr.size());
	int counter = 1;
	// prefix array 
	transformed[0] = arr[firstOddIndex];
	int ptr = 1; // prefix sum array pointer
	int ind = 0; // original array pointer
	while(ptr < arr.size())
	{
		if(ind == firstOddIndex)
			ind++;
		transformed[ptr] = transformed[ptr-1] + arr[ind++];
		if(isOdd(transformed[ptr]))
			counter += 1;
		ptr++;
	}
	cout<<"The transformed arrray is"<<endl;
	for(auto i : transformed)
		cout<<i<<" ";
	cout<<endl;
	return counter;
}
int main(void)
{
	int count = maxCount();
	cout<<"The maximum odd prefixes possible " << count;
	return 0 == 0;
}
