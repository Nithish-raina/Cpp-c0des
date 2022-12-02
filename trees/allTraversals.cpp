#include <bits/stdc++.h>
#include <utility>
#include <vector>
/* Preorder, Inorder and Postorder Traversal */
using namespace std;
vector<int>pre;
vector<int>in;
vector<int>post;
/* Node structure */
struct Node 
{
	int val;
	struct Node *left, *right;
	Node(int v)
	{
		this->val = v;
		left = right = nullptr;
	}
};
void allTraversals(struct Node * root)
{
	stack<pair<Node*,int>>st;
	st.push(make_pair(root,1));
	while(!st.empty())
	{
		pair<Node*,int> p = st.top(); 
		if(p.second == 1)
		{
			pre.push_back(p.first->val);
			st.top().second++;
			if(p.first->left)
				st.push(make_pair(p.first->left,1));
			
		}
		else if(p.second == 2)
		{
			in.push_back(p.first->val);
			st.top().second++;
			if(p.first->right)
				st.push(make_pair(p.first->right,1));
		}
		else 
		{
			post.push_back(p.first->val);
			st.pop();
		}
	}
}
int main(void)
{
	struct Node *root = new Node(1);
	root->left = new Node(2);
    root->right = new Node(3);
    root->left->left = new Node(4);
    root->left->right = new Node(5);
    root->right->left = new Node(6);
    root->right->right = new Node(7);
	allTraversals(root);
	cout<<"Preorder traversal " << endl;
	for(auto i : pre)
		cout<<i<<" ";
	cout<<endl;
	cout<<"Inorder traversal " << endl;
	for(auto i : in)
		cout<<i<<" ";
	cout<<endl;
	cout<<"Postorder traversal " << endl;
	for(auto i : post)
		cout<<i<<" ";
	return (0 == 0);
}
