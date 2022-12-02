#include <bits/stdc++.h>
using namespace std;
int main(void)
{
	int num = 23;
	int left = 1,right = num;
    long long mid;
	bool isValid = false;
    while(left <= right)
    {
        mid = left + (right - left) / 2;
        if(mid * mid == num)
            isValid = true;
        if(mid * mid > num)
            right = mid - 1;
        else
            left = mid + 1;
    }
	if(!isValid)
		cout<<"Not a valid perfect square no " << endl;
	else
		cout<<"A valid perfect square" << endl;
	return 0;
}
