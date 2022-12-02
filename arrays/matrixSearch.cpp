#include <algorithm>
#include <bits/stdc++.h>
#include <vector>
using namespace std;
int main(void)
{
	vector<vector<int>>matrix{{1,3,5,7},{10,11,16,20},{23,30,34,60}};
	int target = 62;
	bool isPresent = false;
	for(int i = 0; i < matrix.size(); i++)
	{
		if(binary_search(matrix[i].begin(),matrix[i].end(),target))	
			isPresent = true;
	}
	if(!isPresent)
		cout<<"Not present"<<endl;
	else
		cout<<"Present"<<endl;
	return 0 == 0;
}
