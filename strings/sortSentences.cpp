#include <bits/stdc++.h>
#include <cctype>
#include <vector>
using namespace std;
int main(void)
{
	string s = "yaar5 can't7 fuck2 shit4 this3 Please1 i6";
	string res = "";
	vector<string>word(10,""); // Capacity of 10 words
	string temp = "";
	for(int i = 0; i < s.size(); i++)
	{
		if(isdigit(s[i]))
		{
			int digit = s[i] - '0';
			temp += " ";
			word[digit - 1] = temp;
			temp = "";
		}
		else if(s[i] == ' ')
		{
			continue;
		}
		else
			temp += s[i];
	}
	for(int i = 0; i < word.size(); i++)  // Size of the word array
	{	
		res += word[i];
	}
	res.pop_back();
	cout<<"The sorted sentence is " << res <<endl;
	return 0;
}
