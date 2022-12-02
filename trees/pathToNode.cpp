#include <bits/stdc++.h>
using namespace std;
struct Node 
{
	int val;
	struct Node *left,*right;
	Node(int data)
	{
		this->val = data;
		left = right = nullptr;
	}
};
bool hasPath(struct Node *root, int x, vector<int> &res)
{
	if(!root)
		return false;
	res.push_back(root->val);
	if(root->val == x)
		return true;
	if(hasPath(root->left,x,res) || hasPath(root->right,x,res))
		return true;
	res.pop_back();
	return false;
}
int main(void)
{
	struct Node *root = new Node(1);
	vector<int>res;
    root->left = new Node(2);
    root->right = new Node(3);
    root->left->left = new Node(4);
    root->left->right = new Node(5);
    root->right->left = new Node(6);
    root->right->right = new Node(7);
	int x = 15;
	if(hasPath(root,x,res))
	{
		cout<<"The path is " << endl;
		for(auto i : res)
			cout<<i<<" ";
		cout<<endl;
	}
	else
		cout<<"No path is present " << endl; 
	return 0 == 0;
}
