#include <bits/stdc++.h>
#include "NodeTemplate.h"
using namespace std;
LinkedListNode<int>*deletePosition(LinkedListNode<int>*head, int pos)
{
	if(pos == 0)
	{
		return head->next;
	}
	int i = 0;
	LinkedListNode<int> *curr = head;
	while(curr != nullptr && i < pos - 1)
	{
		i++;
		curr = curr->next;
	}
	if(curr->next == nullptr && i == pos - 1)
	{ 
		cout << "Invalid index" << endl;
		return head;
	}
	curr->next = curr->next->next;
	return head;
}
int main(void)
{
	LinkedListNode<int>head(10);
	LinkedListNode<int>node1(20);
	LinkedListNode<int>node2(45);
	LinkedListNode<int>node3(50);
	head.next = &node1;
	node1.next = &node2;
	node2.next = &node3;
	cout << "Before deletion " << endl;
	displayList(&head);
	int pos = 4;
	cout << endl;
	cout <<"Deleting the node at pos " << " " << pos << endl;
	LinkedListNode<int>*dest = deletePosition(&head,pos);
	displayList(dest);	
	return 0;
}
