#include <bits/stdc++.h>
#include <unordered_map>
#include <vector>
using namespace std;
class RandomizedSet
{
	private :
		vector<int>temp;
		unordered_map<int,int>occurences;
	public :
		RandomizedSet()
		{
			//Default constructor to create an instance when it is instantiated
		}
		bool insertVal(int val)
		{
			if(occurences.find(val) != occurences.end())
				return false;
			temp.push_back(val);
			int back = temp.back();
			occurences[val] = temp.size() - 1;
			return true;
		}
		bool deleteVal(int val)
		{
			if(occurences.find(val) == occurences.end())
				return false;
			int last = temp.back();          // Fetching the last element to swap it with the deleting element
			int delIndex = occurences[val];  // Fetching the deleting element's index from the hashmap
			temp[delIndex] = temp.back();           // Swapping last element with deleting index's element
			temp.pop_back();
			occurences[last] = delIndex;
			occurences.erase(val);
			return true;
		}
		int getRandom()
		{
			return temp[rand() % temp.size()];
		}
};
int main(void)
{
	
	RandomizedSet r;
	cout<<r.insertVal(1)<<endl;
	cout<<r.insertVal(2)<<endl;
	cout<<r.insertVal(3)<<endl;
	cout<<r.deleteVal(4)<<endl;
	cout<<r.insertVal(5)<<endl;
	cout<<r.deleteVal(1)<<endl;
	cout<<r.getRandom()<<endl;
	return 0;
}
