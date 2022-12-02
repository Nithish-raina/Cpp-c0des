#include <bits/stdc++.h>
#include <list>
#include <ostream>
using namespace std;
bool isPalindrome(const list<int>& l)
{
	list<int>dl(l.rbegin(),l.rend());
	return (l == dl);
}
int main(void)
{
	list<int>l{1,2,2,1};
	if(!isPalindrome(l))
		cout<<"Not a palindrome"<<endl;
	else
		cout<<"A palindrome"<<endl;
	return 0;
}
