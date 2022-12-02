#include <bits/stdc++.h>
#include <list>
using namespace std;
int main(void)
{
	list<int>ll{1};
	if(ll.size() == 1 || ll.size() == 0)
		cout <<"No middle element found " << endl;
	int mid = ll.size() / 2;
	auto it = ll.begin();
	while(mid--)
	{
		it++;
	}
	cout << "The middle element is " << *it <<endl;	
	return 0;
}
