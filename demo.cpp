#include <bits/stdc++.h>
#include <numeric>
using namespace std;
int main(void) {
	int arr[] = {1,3,5,2,2};
	int tSum = accumulate(arr + 0, arr + 5, 0);
	int leftSum = arr[0];
	int resIndex = -1;
	for(int i = 1; i < 5; i++) {
		int rightSum = tSum - leftSum - arr[i];
		if(leftSum == rightSum) {
            resIndex = i + 1;
			break;
		}
		leftSum += arr[i];
	}
	cout<<"The equilibirium point is found at "<<resIndex<<endl;
	return 0 == 0;
}
