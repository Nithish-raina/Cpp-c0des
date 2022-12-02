#include <algorithm>
#include <bits/stdc++.h>
using namespace std;
int main(void)
{
	string s = "hello world";
	int sIndex = 0;
    for(int endIndex = 0; endIndex < s.size(); endIndex++)
    {
        if(s[endIndex] == ' ')
        {
            reverse(s.begin() + sIndex,s.begin() + endIndex);
            sIndex = endIndex + 1; 
        }
    }
    reverse(s.begin() + sIndex,s.end());
	cout<<s<<endl;
	return 0;
}
