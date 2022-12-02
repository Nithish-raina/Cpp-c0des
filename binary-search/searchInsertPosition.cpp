#include <bits/stdc++.h>
using namespace std;
int main(void)
{
	vector<int>arr{1,2,4,7,8,9,23};
	int target = 25;
	//Lets start with the bSearch by utilising the property of sorted order
	int found = -1;
	int i = 0,j = arr.size() - 1;
	while(i < j)                 // Dead loop when i = j hence go till j-1
	{
		int mid = i + (j - i) / 2;
		if(arr[mid] == target)
			found = mid;
		if(arr[mid] < target)
			i = mid + 1;
		else
			j = mid;
	}
	// when i becomes j 
	if(arr[i] <= target)
		found = i + 1;
	else
		found = i;
	cout<<"The search position for the target is at " << found << endl;
	return 0;
}
