#include <bits/stdc++.h>
#include <vector>
using namespace std;
struct Node
{
	int val;
	struct Node *left, *right;
	Node(int data)
	{
		this->val = data;
		left = right = nullptr;
	}
};
bool isLeaf(struct Node * root)
{
	if(root->left == nullptr && root->right == nullptr)
		return true;
	return false;
}
void addLeftNodes(struct Node *root, vector<int> &res)
{
	struct Node * curr = root->left;
	while(curr != nullptr)
	{
		if(!isLeaf(curr)) res.push_back(curr->val);
		if(curr->left) curr = curr->left;
		else curr = curr->right;
	}
}
void addLeaves(struct Node *root, vector<int> &res)
{
	if(root == nullptr)
		return;
	if(isLeaf(root)) 
	{
		res.push_back(root->val);
		return;
	}
	addLeaves(root->left,res);
	addLeaves(root->right,res);
}
void addRightNodes(struct Node *root, vector<int> &res)
{
	struct Node * curr = root->right;
	stack<int>st;
	while(curr != nullptr)
	{
		if(!isLeaf(curr)) st.push(curr->val);
		if(curr->right) curr = curr->right;
		else curr = curr->left;
	}
	while(!st.empty())
	{
		res.push_back(st.top());
		st.pop();
	}
}
int main(void)
{
	vector<int>res;
	struct Node *root = new Node(20);
	res.push_back(root->val);
    root->left = new Node(8);
    root->left->left = new Node(4);
    root->left->right = new Node(12);
    root->left->right->left = new Node(10);
    root->left->right->right = new Node(14);
    root->right = new Node(22);
    root->right->right = new Node(25);
	addLeftNodes(root,res);
	addLeaves(root,res);
	addRightNodes(root,res);
	cout<<"Boundary Traversal of the given tree is " << endl;
	for(auto i : res)
		cout<<i << " ";
	cout<<endl;
	return (0 == 0);
}
