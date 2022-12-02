#include <bits/stdc++.h>
using namespace std;
int ways(int S[], int n, int v) {
	if(n == 1) return S[0] <= v; 
	int count = 0;
	for(int i = 0; i < n; i++) {
		for(int j = i+1; j < n; j++) { 
			if(S[i] * S[j] <= v)
				count++;
		}
	}
	return count;
}
int main(void)
{
	int n,v;
	cin>>n>>v;
	int S[n];
	for(int i = 0; i < n; i++)
		cin>>S[i];
	int res = ways(S, n, v);
	cout<<res<<endl;
	return 0 == 0;
}
