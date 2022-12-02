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
void leftView(Node *root, int level, vector<int> &res)
{
	if(!root)
		return;
	if(res.size() == level)
		res.push_back(root->val);
	leftView(root->left,level+1,res);
	leftView(root->right,level+1,res);
}
int main(void)
{
	Node *root = new Node(10);
    root->left = new Node(2);
    root->right = new Node(3);
    root->left->left = new Node(7);
    root->left->right = new Node(8);
    root->right->right = new Node(15);
    root->right->left = new Node(12);
    root->right->right->left = new Node(14);
	// store the left viewable nodes here
	vector<int>res;
	int level = 0;
	leftView(root,level,res);
	for(auto i : res)
		cout<<i<<" ";
	cout<<endl;
	return (0 == 0);
}
