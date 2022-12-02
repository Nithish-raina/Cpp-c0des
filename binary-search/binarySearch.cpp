#include <bits/stdc++.h>
#include <vector>
using namespace std;
int main(void)
{
	vector<int>input{2,7,10,34,78,99};
	int val = 34;
	int left = 0;
    int right = input.size() - 1;
    int mid;
    int found = -1;
    while(left <= right)
    {
        mid = left + (right - left) / 2;
        if(input[mid] == val)
            found = mid;
        if(val > input[mid])
            left = mid + 1;
        else 
            right = mid - 1;
    }
	cout<<"The target is fouund at index " << found << endl;
	return 0;
}
