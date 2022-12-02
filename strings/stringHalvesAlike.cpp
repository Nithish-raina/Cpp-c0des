#include <bits/stdc++.h>
using namespace std;
int main(void)
{
	string s = "book";
	int count = 0;
    for(int i = 0; i < s.size(); i++)
    {
        s[i] = tolower(s[i]);
        if(i < s.size() / 2)
        {
            if(s[i] == 'a' || s[i] == 'e' || s[i] == 'i' || s[i] == 'o' || s[i] == 'u')
                count++;
        }
        else
        {
            if(s[i] == 'a' || s[i] == 'e' || s[i] == 'i' || s[i] == 'o' || s[i] == 'u')
                count--;
        }
	}
    if(!count)
		cout<<"Strings are alike " << endl;
	else
		cout<<"Strings are not alike " << endl;
	return 0;
}
