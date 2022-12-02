#include <bits/stdc++.h>
#include <unordered_map>
using namespace std;
int minTimes(int bench[], int n)
{
	unordered_map<int,int>pos;
	int res = 0;
	for(int i = 0; i < n; i++)
		pos[bench[i]] = i+1;
	char currMov = 'l';
	int stud = 1;    // stud -> 1
	int studPos = pos[stud];  //pos(stud 1) 
	while(stud < n+1)
	{
		int newPos = pos[stud + 1]; //stud -> 2
		cout<<newPos<<endl;
		if(newPos > studPos && currMov == 'r')
		{
			res++;
			currMov = 'l';
		}
		if(newPos < studPos && currMov == 'l')
		{
			res++;
			currMov = 'r';
		}
		stud = stud + 1;
		studPos = pos[stud];
	}
	return res;
}
int main(void)
{
	int n; //size of the array
	cin>>n;
	int bench[n];
	for(int i = 0; i < n; i++)
		cin>>bench[i];
	int res = minTimes(bench, n);
	cout<<res<<endl;
	return 0;
}
