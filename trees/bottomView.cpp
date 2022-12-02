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
void bottomView(struct Node *root, vector<int> &res)
{
	map<int,int>rem;
	queue<pair<struct Node*,int>>q;
	q.push({root,0});
	while(!q.empty())
	{
		auto p = q.front();
		q.pop();
		int lineNo = p.second;
		rem[lineNo] = p.first->val;
		if(p.first->left != nullptr)
			q.push({p.first->left,lineNo - 1});
		if(p.first->right != nullptr)
			q.push({p.first->right,lineNo + 1});
	}
	for(auto i : rem)
	{
		res.push_back(i.second);
	}
}
int main(void)
{
	vector<int>res;
	Node *root = new Node(20);
    root->left = new Node(8);
    root->right = new Node(22);
    root->left->left = new Node(5);
    root->left->right = new Node(3);
    root->right->left = new Node(4);
    root->right->right = new Node(25);
    root->left->right->left = new Node(10);
    root->left->right->right = new Node(14);
	cout<<"Bottom view of the binary tree is" << endl;
	bottomView(root,res);
	for(auto i : res)
		cout<<i<<" ";
	cout<<endl;
	return (0 == 0);
}
