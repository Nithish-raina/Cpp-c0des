/* 
 * Utilizing stack is also a good approach with smart push and pop operations
 * The same approach for typical word reversal problem with space separated words
*/
#include <algorithm>
#include <iostream>
#include<bits/stdc++.h>
using namespace std;
int main(void)
{
	string sentence = "abcd.o";
	string res = "";
	string temp = "";
	int i = sentence.size() - 1;
	while(i >= 0)
	{
		if(sentence[i] != '.')
		{
			temp += sentence[i];
		}
		if(sentence[i] == '.' || i == 0) {
			reverse(temp.begin(), temp.end());
			if(i == 0)
				res += temp;
			else
				res += temp +".";
			temp = "";
		}
		i--;
	}
	cout<<"The reversed word is "<<res<<endl;
	return 0;
}
