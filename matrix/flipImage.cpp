#include<bits/stdc++.h>
#include <vector>
using namespace std;
int main(void)
{
	vector<vector<int>>image{{1,1,0},{1,0,1},{0,0,0}};
	for(int i = 0; i < image.size(); i++)
    {
		reverse(image[i].begin(),image[i].end());
        for(int j = 0; j < image[i].size(); j++)
        {
                image[i][j] ^= 1;
		}
    }
    for(int i = 0; i < image.size();i++)
    {
       	for(int j = 0; j < image[i].size(); j++)
       	{
       		cout<<image[i][j]<<" ";	
       	}
    }
	return 0;
}

