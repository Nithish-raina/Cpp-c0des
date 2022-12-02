#include <algorithm>
#include <bits/stdc++.h>
#include <functional>
#include <utility>
#include <vector>
using namespace std;
template<class T>
void displayPair(const T &p)
{
	cout << p.first << " " << p.second << endl;	
}
template<class T1,class T2>
pair<T1,T2> createPair(T1 a, T2 b)
{
	pair<T1,T2> p;
	p.first = a;
	p.second = b;
	return p;
}
bool sortBySecond(pair<int,char> &p1,pair<int,char> &p2) //Avoid copying of whole pair into p1 and p2
{
	return p1.second < p2.second;	
}
int main(void)
{
	pair<int,int>p = createPair(34,54);
	displayPair(p);
	vector<pair<int,int>> v1{{1,2},{2,4},{5,6},{7,8}};
	vector<pair<int,char>>v2;
	//cout<<"Enter the pair of values individually"<<endl;
	//for(int i = 0; i < 5; i++)
	//{
		//cout<<"Enter the pair" << " " << i << endl;
		//int a;
		//char b;
		//cin>>a>>b;
		//v2.push_back(createPair(a, b));
	//}
	//sort(v2.begin(),v2.end(),sortBySecond);
	//for(auto x : v2)
		//cout << "(" << x.first << "," << x.second << ")";
	cout<<endl;
	vector<pair<int,pair<string,float>>> s;
	s.push_back({0,{"Nithish",9.6}});
	s.push_back({1,{"Ashok Kumar",7.5}});
	s.push_back({2,{"Ranjini",9.9}});
	s.push_back({3,{"Firdouse",10.0}});
	s.insert(s.end(),{4,{"Lakshmanan",6.6}});
	for(auto x : s)
		cout <<"ID :" << " " << x.first << "||" << " " << "Student Name : " << " " << x.second.first << "||" << " " << "Percentile : " << " " << x.second.second <<endl; 
	// set<int>s2; ascending order
	set<pair<int,int>,greater<pair<int,int>>>s2;
	s2.insert({5,4});
	s2.insert({4,3});
	s2.insert({45,78});
	s2.insert(v1.begin(),v1.end());
	for(auto x : s2)
		cout << x.first << " " << x.second <<endl;
	cout<<endl;
//	for(auto x : v1)
		//cout<<x.first << " " << x.second << endl;
	// assigning s2 to s1
	set<pair<int,int>,greater<pair<int,int>>>s3 = s2;
	//swapping s2 and s3
	s2.swap(s3);
	count
	return 0;
}
