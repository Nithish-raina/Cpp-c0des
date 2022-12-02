#include <bits/stdc++.h>
#include <iostream>
#include "NodeTemplate.h"
int main(void)
{
	using std::cout;
	using std::cin;
	using std::endl;
	LinkedListNode<int>head(1);
	LinkedListNode<int>node1(0);
	LinkedListNode<int>node2(1);
	LinkedListNode<int>node3(1);
	head.next = &node1;
	node1.next = &node2;
	node2.next = &node3;
	int dec = head.val;
	LinkedListNode<int> * temp = head.next;
	while(temp != nullptr)
	{
		int val = temp->val;
		dec = dec * 2 + val;
		temp = temp->next;
	}
	cout << "The decimal equivalent of the llist is " << dec << endl;
	return 0;
}
