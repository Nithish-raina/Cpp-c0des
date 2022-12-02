#include <algorithm>
#include<bits/stdc++.h>
#include <cstdlib>
#include <vector>
using namespace std;
bool comp(int a, int b)
{
	return a > b;
}
int addUp(int a)
{
	return ++a;
}
int addAdjacent(int a, int b)
{
	return a + b;
}
int main()
{
	int ar[5] = {0,1,20,34,5};
	vector<int>v{10,20,30};
	v.push_back(40);
	v.push_back(10);
	v.push_back(10);
	v.push_back(10);
	stable_sort(ar,ar+5,comp);
	//v.clear();
	vector<int>v2(v.size());
	cout<<v.empty()<<endl;
	cout<<"v.size()"<<v.size()<<endl;
	cout<<"v.capacity()"<<v.capacity()<<endl;
	//cout<<v[0]<<endl;   -- Dont do this instead use at()
	cout<<binary_search(ar,ar+5,20,comp)<<endl;
	for(int x : v)
		cout<<x<<" ";
	vector<double>vd;
	vd.assign(5,rand());
	for(double y : vd)
		cout<<y<<" "<<endl;
	cout<<vd.at(2)<<endl;
	sort(v.begin(),v.end());
	vector<int>::iterator lb = lower_bound(v.begin(),v.end(),40);
	vector<int>::iterator up = upper_bound(v.begin(),v.end(),40);
	cout<<"The lower bound iterator is "<<*lb<<endl;
	cout<<"The upper bound iterator is "<<*up<<endl;
	cout<<"The position of the given element is "<<up - lb<<endl;
	cout<<count(v.begin(), v.end(),10);
	vector<int>::iterator fv = find(v.begin(),v.end(),30);
	if(fv != v.end() ) 
		cout<<"Found"<<endl; 
	else
		cout<<"Not Found:"<<endl;
	vector<int>::iterator it2 = unique(v.begin(),v.end());
	v.resize(it2 - v.begin());
	for(int y : v)
		cout<<y<<" "<<endl;
	// cout<<"Lets see the result after unique operation"<<v.at(4)<<endl;
	// Not allowed after resizing the array exception caught ot of range
	transform(v.begin(), v.end(), v2.begin(),addUp);
	vector<int>v3(v2.size());
	transform(v.begin(),v.end(),v2.begin(),v3.begin(),addAdjacent);
	cout<<"The contents of the v2 vector is "<<endl;
	for(int x : v2)
		cout<<x<<" ";
	cout<<"The contents of the vector v3 after binary transfomration is"<<endl;
	for(int s : v3)
		cout<<s<<" ";
	return 0;
}
