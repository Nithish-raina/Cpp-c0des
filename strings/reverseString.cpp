#include <bits/stdc++.h>
using namespace std;
int main(void)
{
	string str = "wfe";
	int i = 0;
    int j = str.size() - 1;
    while(i < j)
    {
        swap(str[i++],str[j--]);
    }
	cout<<str<<endl;
	return 0;
}
