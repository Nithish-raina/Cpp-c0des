#include <bits/stdc++.h>
#include <vector>
using namespace std;
int main(void)
{
	vector<int>numbers{2,7,11,15};
	int target = 9;
	int i = 0;
    vector<int>res;
    int j = numbers.size() - 1;
    while(i < j)
    {
        if(numbers[i]+numbers[j] == target)
        {
            res.push_back(i+1);
            res.push_back(j + 1);
        }
        if(numbers[i] + numbers[j] > target)
            j--;
        else
            i++;
    }
	for(auto i : res)
		cout<<i<<" ";
	cout<<endl;
	return 0;
}
