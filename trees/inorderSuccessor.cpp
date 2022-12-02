#include <bits/stdc++.h>
#include <utility>
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
pair<Node *,bool> inorderSucc(struct Node *root, int val)
{
	pair<Node *,bool> p = make_pair(nullptr,false);
	while(root != nullptr)
	{
		if(root->val == val)
			p.second = true;
		if(val >= root->val)
			root = root->right;
		else
		{
			// succ = root;
			p.first = root;
			root = root->left;
		}
	}
	return p;
}
int main(void)
{
	struct Node *root = new Node(20);
	root->left = new Node(8);
	root->right = new Node(22);
	root->left->left = new Node(4);
	root->left->right = new Node(12);
	root->left->right->left = new Node(10);
	root->left->right->right = new Node(14);
	int des = 0;
	pair<Node*,bool> res = inorderSucc(root,des);
	if(res.second)
	{
		cout<<"Element found " << endl;
		if(res.first != nullptr)
			cout<<"Inorder successor of " << des << " is " << res.first->val;
		else
			cout<<"Inorder successor not found " << endl;
	}
	else {
		cout<<"No such element is present in the given binary search tree " <<endl;
	}
	return (0 == 0);
}
