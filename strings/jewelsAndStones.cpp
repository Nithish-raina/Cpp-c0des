#include <bits/stdc++.h>
using namespace std;
int main(void)
{
	string jewels = "aA";
	string stones = "aAAbbbb";
	int count = 0;
    unordered_set<char> jStr(jewels.begin(), jewels.end());
    for (char c : stones)
    {
        if (jStr.count(c)) 
            count++;
    }    
	cout<<"The no of stones that are jewels are " << count << endl;
	return 0;
}
