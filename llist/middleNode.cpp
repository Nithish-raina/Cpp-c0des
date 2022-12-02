#include <bits/stdc++.h>
#include <cstdlib>
#include "NodeTemplate.h"
using namespace std;
int main(int argc, char *argv[])
{
	int headVal = atoi(argv[1]);
	LinkedListNode<int>head(headVal);
	LinkedListNode<int> *temp = nullptr;
	for(auto it = 2; it < argc; it++)
	{
		if(head.next == nullptr)
		{
			cout << "getting into if " << endl;
			int nodeData = atoi(argv[it]);
			LinkedListNode<int>nodeD(nodeData);
			head.next = &nodeD;
			temp = &nodeD;
		}
		else 
		{
			cout << "getting into else " << endl;
			int nodeVal = atoi(argv[it]);
			LinkedListNode<int>nodeV(nodeVal);
			temp->next = &nodeV;
			temp = &nodeV;
		}
	}
	displayList(&head);
	return 0;
}
