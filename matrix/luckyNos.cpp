#include<bits/stdc++.h>
#include <vector>
using namespace std;
int main(void)
{
	vector<vector<int>>matrix{{3,7,8},{9,11,13},{15,16,17}};
	unordered_set<int>s;
	vector<int>lNos;
	for(int i = 0; i < matrix.size(); i++)
    {
        int rowMin = INT_MAX;
        for(int j = 0; j < matrix[i].size(); j++)
        {
            rowMin = min(matrix[i][j],rowMin);
        }
        s.insert(rowMin);
    }
    for(int j = 0; j < matrix[0].size(); j++)
    {
		int colMax = INT_MIN;
        for(int i = 0; i < matrix.size(); i++)
        {
            colMax = max(matrix[i][j],colMax);
        }
        if(s.find(colMax) != s.end())
                 lNos.push_back(colMax);
    }
	cout<<"The lazy nos of the given array are " << endl;
	for(auto i : lNos)
		cout<<i<<" ";
	return 0;
}
