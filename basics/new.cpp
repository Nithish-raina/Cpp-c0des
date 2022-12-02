#include <algorithm>
#include <bits/stdc++.h>
#include <cctype>
#include <cmath>
#include <cstdlib>
#include <limits>
#include <stack>
#include <string>
#include <type_traits>
#include <unordered_map>
#include <vector>
using namespace std;
int main()
{
	string s = "i.like.this.very.much";
	string rs = "";
	stack<char>st;
	for(int i = s.size() - 1; i >= 0; i--)
	{
		if(s[i] != '.')
		{
			while(s[i] != '.')
			{
				st.push(s[i]);
			}
		}
		else 
		{
			while(!st.empty())
			{
				rs+=st.top();
				st.pop();
			}
			rs+='.';
		}
	}
	cout<<"The reversed sentence is " <<rs<<endl;
	return 0;
}
