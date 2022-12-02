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
	string s = "sentence a this is"; 
	vector<string>v(s.size());
	v.insert(v.begin() + 0,"this");
	v.insert(v.begin() + 1,"is");
	v.insert(v.begin() + 2,"a");
	v.insert(v.begin() + 3,"sentence");
	for(auto s : v)
		cout<<s<<" ";
	cout<<endl;
	string d = "this1";
	int pos = 0;
	for(int i = 0; i < d.size(); i++)
	{
		if(isdigit(d[i]))
			pos = i;
	}
	cout<<"Present at " << pos;
	return 0;
}
