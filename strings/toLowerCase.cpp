#include <bits/stdc++.h>
#include <cctype>
using namespace std;
int main(void)
{
	string s = "ThIs";
	for(char &c : s)
		if(c >= 'A' && c <= 'Z')
            c += 32;
	cout<<s<<endl;
	return 0;
}
