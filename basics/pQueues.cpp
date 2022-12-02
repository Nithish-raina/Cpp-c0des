/* Lists container and its algorithms with iterators */
#include <algorithm>
#include <bits/stdc++.h>
#include <iomanip>
#include <mutex>
#include <numeric>
#include <stack>
#include <vector>
using namespace std;
void displayContainer(int i)
{
	cout<<i<<" ";
}
bool findPrimes(int a)
{
	for(int i = 2; i <= a; i++)
	{
		if(a % i == 0)
			return 0;
	}
	return 1;
}
bool duplicateTwenty(int a, int b)
{
	return b % a == 0;
}
using namespace std;
int main()
{
	int arr[] = {10,20,34,53,34,34,324,124,34};
	// float a[][] = {0}; /* Error */
	for(int &x : arr) // Range based for loop with references
		x = x * 2;
	for(int x : arr) // Range based for loop with x as copy value
		cout<<x<<" ";
	cout<<endl;
	vector<int>v(arr,arr+9);
	for_each(v.begin(), v.end(), displayContainer);
	cout<<endl;
	vector<int>c{10,20,30,10,20,10,300};
	cout<<"The elements of c are "<<endl;
	for_each(c.begin(),c.end(),displayContainer);
//	cout<<count(v.begin(),v.end(), 10);
	vector<int>::iterator it = find_if(v.begin(), v.end(), findPrimes);
	if(it != v.end())	
		cout<<"Found and the element is "<<*it<<endl;
	else 
		cout<<"Not found"<<endl;
	it = unique(v.begin(), v.end());
	cout<<"The unique elements in the vector v are"<<endl;
	for_each(v.begin(),it,displayContainer);
	it = unique(v.begin(),v.end(),duplicateTwenty);
	cout<<"After unique application with binary predicate"<<endl;
	for_each(v.begin(),it, displayContainer);
	reverse(v.begin(),v.end());
	cout<<"After reversal"<<endl;
	for_each(v.begin(),v.end(),displayContainer);
	priority_queue<int>s;
	s.push(1);
	s.push(2);
	s.push(3);
	cout<<"Demo on pQueues"<<endl;
	while(!s.empty())
	{
		int i = s.top();
		cout<<i<<" ";
		s.pop();
	}
	cout<<endl;
	cout<<"The adjacent diff between elements in c is "<<endl;
	vector<int>v2(7);
	it = adjacent_difference(c.begin(), c.end(), v2.begin());
	for_each(v2.begin(),v2.end(),displayContainer);
	stack<int>si;
	for(int i = 0; i < 10; i++)
	{
		si.push(i);
	}
	cout<<endl;
	cout<<"The stack elements are"<<endl;
	while(!si.empty())
	{
		cout<<si.top()<<" ";
		si.pop();
	}
	return 0;
}
