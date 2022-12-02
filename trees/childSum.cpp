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
bool isChildSum(struct Node *root)
{
	if(!root || !root->left && !root->right)
		return true;
	int sum = 0;
	if(root->left)
		sum += root->left->val;
	if(root->right)
		sum += root->right->val;
	bool lst = isChildSum(root->left);
	bool rst = isChildSum(root->right);
	return (root->val == sum) && lst && rst;
}
int main(void)
{
	struct Node* root = new Node(3);
    root->left = new Node(1);
    root->right = new Node(2);
    root->left->left = new Node(0);
    root->left->right = new Node(1);
    root->right->right = new Node(2);
	root->right->left = new Node(1);
	if(isChildSum(root))
		cout<<"True"<<endl;
	else
		cout<<"False"<<endl;
	return (0 == 0);
}
