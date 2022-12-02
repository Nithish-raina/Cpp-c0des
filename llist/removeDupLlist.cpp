#include <bits/stdc++.h>
#include <unordered_map>
#include <unordered_set>
#include "NodeTemplate.h"
int main(void)
{
	using std::cout;
	using std::endl;
	LinkedListNode<int>head(3);
	LinkedListNode<int>node1(2);
	LinkedListNode<int>node2(4);
	LinkedListNode<int>node3(3);
	LinkedListNode<int>node4(3);
	LinkedListNode<int>node5(2);
	head.next = &node1;
	node1.next = &node2;
	node2.next = &node3;
	node3.next = &node4;
	node4.next = &node5;
	cout << "Before removing duplicates " << endl;
	displayList(&head);
	cout << endl;
	std::unordered_map<int,bool>uMap;
	LinkedListNode<int> *pColl = nullptr;
	LinkedListNode<int> *tColl = &head;
	while(tColl != nullptr)
	{
		int val = tColl->val;
		if(uMap.find(val) != uMap.end())
		{
			pColl->next = tColl->next;
			delete tColl;
			tColl = nullptr;
			tColl = pColl->next;
		}
		else 
		{
			uMap[val] = true;
			pColl = tColl;
			tColl = tColl->next;
		}
	}
	cout<<"After removing duplicates " << endl;
	displayList(&head);
	return 0;
}
