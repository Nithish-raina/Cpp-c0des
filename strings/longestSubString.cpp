#include <algorithm>
#include<bits/stdc++.h>
#include <cstdint>
#include <cstdlib>
#include <unordered_map>
int main(void)
{
	using std::cout;
	using std::endl;
	using std::string;
	string s = "p";
	std::unordered_map<char,int>m;
	uint16_t len = 1;
	for(int i = 0; i < s.size(); i++)
	{
		m[s[i]] = 1;
		uint16_t prevLen = 0;
		for(int j = i + 1; j < s.size(); j++)
		{
				if(m.find(s[j]) != m.end())
				{
					prevLen = m.size();
					m.clear();
					break;
				}
				else
					m[s[j]] = 1;
		}
		len = std::max(prevLen,len);
	}
	cout<<"The length of the longest substring is" << " " << len << endl;
	return 0;
}
