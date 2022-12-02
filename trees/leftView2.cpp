#include <bits/stdc++.h>
#include <queue>
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
void leftView(Node *root, vector<int> &res)
{
	queue<Node*>q;
	q.push(root);
	while(!q.empty())
	{
		int n = q.size();
		for(int i = 0; i < n; i++)
		{
			Node *node = q.front();
			q.pop();
			if(i == 0) res.push_back(node->val);
			if(node->left) q.push(node->left);
			if(node->right) q.push(node->right);
		}
	}
}
int main(void)
{
	Node* root = new Node(10);
    root->left = new Node(2);
    root->right = new Node(3);
    root->left->left = new Node(7);
    root->left->right = new Node(8);
    root->right->right = new Node(15);
    root->right->left = new Node(12);
    root->right->right->left = new Node(14);
	vector<int>res;
	leftView(root,res);
	for(auto i : res)
		cout<<i<<" ";
	cout<<endl;
	return 0 == 0;
}
