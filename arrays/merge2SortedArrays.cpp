#include <bits/stdc++.h>
using namespace std;
int main()
{
	vector<int>a1{3,6,9,0,0};
	vector<int>a2{4,10};
	vector<int>res;
	vector<int>mergeSortedArrays(vector<int>&,vector<int>&,int,int);
	res = mergeSortedArrays(a1,a2,a1.size(),a2.size());
	for(auto it : res)
		cout<<it<<" ";
	return 0;
}
vector<int> mergeSortedArrays(vector<int>& arr1, vector<int>& arr2, int m, int n) {
	// 3 Pointer approach
    int i = m - 1;
    int j = n - 1;
    int k = m + n - 1;
    while(i >= 0 && j >= 0)
    {
        if(arr1[i] >= arr2[j])
            arr1[k--] = arr1[i--];
        else
            arr1[k--] = arr2[j--];
    }
    while(j >= 0)
        arr1[k--] = arr2[j--];
    return arr1;
}
