#include <algorithm>
#include <bits/stdc++.h>
using namespace std;
void reverseString(string s)
{
	if(s.size() == 0)
		return;
	reverseString(s.substr(1));
	cout<<s[0];
}
int main(void)
{
	string s = "avegr";
	cout << "The reversed string is "<<endl;
	reverseString(s);
	return 0;
}
