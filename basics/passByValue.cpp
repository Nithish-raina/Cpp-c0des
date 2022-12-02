#include <iostream>
#include <bits/stdc++.h>
#include <vector>
using namespace std;
void displayString(vector<string> &s1,vector<string> &s2)
{
	for(string &st : s1)
		cout<< st <<" ";
	cout<<endl;
	for(string &st : s2)
		cout<<st<<" ";
	cout<<endl;
}
int main()
{
	vector<string>s1{"wr4","Etreh","Wre","efregerhr","wetvyb4e5v3tw4y3<F5>6yevt3yertetv46v4w","wqv534yvt4wtfw3v5gvt4wevtg3e4ytv3w","3qv6y4ybygtyh64rtrytbr3w4ye5e5t","w46y4b64vrsce5veb5t","3vty5erytve5vrc3tg","evtyer ybgevther","3vt4wygrtvgrg"};
	vector<string>s2{"wtg4rby4tg","qcrtwetby45edvt","WQ","wqrt4eyrbt3vetgvevrfwcr 3tevt4 4vtev523v5wcrtv4erg ","tvre ybervg","r setvg ee tg tgsr","ereeseR","Et restrF","Etvesrewg","etvrg r","etvgretrg","vtetvwer","Rreveg"};
	displayString(s1,s2);
	return 0;
}
