#include<bits/stdc++.h>
using namespace std;
int main(void)
{
	vector<int>v{5,2,0,0};
	int n = v.size();
	int mEle = -1; //if no mEle is present in the array
    int count = 0;
    	for(int i = 0; i < n; i++)
    	{
        	if(!count)
        	{
            	count = 1;
            	mEle = v[i];
            	continue;
        	}
        	if(v[i] ==  mEle)
            		count++;
        	else
            	count--;
    	}
    	count = 0;
    	for(int i = 0; i < n; i++)
    	{
        	if(v[i] == mEle)
            		count++; 
    	}
    	if(count <= n / 2)
        	mEle = -1;
		cout<<"The majority element in the given array is " << mEle << endl;
	return 0;
}
