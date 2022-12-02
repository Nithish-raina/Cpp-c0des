#include <bits/stdc++.h>
using namespace std;
class Node
{
	public:
		int data;
		Node *left;
		Node *right;
		Node(int value)
		{
			this->data = value;
			left = right = nullptr;
		}
};
void levelOrderTraversal(Node *root, vector<vector<int>> &res)
{
	queue<Node*>q;
	q.push(root);
	while(!q.empty())
	{
		int n = q.size();
		vector<int>level;
		for(int i = 0; i < n; i++)
		{
			Node *topNode = q.front();
			q.pop();
			if(topNode->right) q.push(topNode->right);
			if(topNode->left) q.push(topNode->left);
			level.push_back(topNode->data);
		}
		res.push_back(level);
	}
}
int main(void)
{
	Node *root = new Node(1);
	root->left = new Node(2);
	root->right = new Node(3);
	root->left->left = new Node(4);
	root->left->right = new Node(5);
	root->right->left = new Node(7);
	root->left->left->left = new Node(9);
	root->left->right->right = new Node(6);
	root->right->left->right = new Node(8);
	vector<vector<int>>res;
	levelOrderTraversal(root,res);
	cout<<"Level order traversal of the given tree is"<<endl;
	for(auto i : res)
		for(auto j : i)
			cout<<j<<" ";
	return 0 == 0;
}
