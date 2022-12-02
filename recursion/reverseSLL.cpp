#include <bits/stdc++.h>
#include <stack>
using namespace std;
template<class T1>
class LinkedListNode
{
	public:
		T1 data;
		LinkedListNode<T1> *next;
		LinkedListNode(T1 data)
		{
			this->data = data;
			this->next = nullptr;
		}
};
template<class T2>
void displayLinkedList(LinkedListNode<T2>*head)
{
	while(head != nullptr)
	{
		cout << head->data << " ";
		head = head->next;
	}
}
LinkedListNode<int>* reverseLinkedList(LinkedListNode<int>*head)
{
	if(head == nullptr || head->next == nullptr)
	{
		return head;
	}
	LinkedListNode<int>*prev = nullptr;
	LinkedListNode<int>*current = head;
	while(current != nullptr)
	{
		LinkedListNode<int>*currentNext = current->next;
		current->next = prev;
		prev = current;
		current = currentNext;
	}
	return prev;
}
int main(void)
{
	LinkedListNode<int>head(12);
	LinkedListNode<int>node1(13);
	head.next = &node1;
	LinkedListNode<int>node2(67);
	node1.next =&node2;
	LinkedListNode<int>node3(78);
	node2.next = &node3;
	cout << "Before reversing " << endl;
	displayLinkedList(&head);
	cout<<endl;
	LinkedListNode<int> * reverseHead = reverseLinkedList(&head);
	cout << "After reversing " << endl;
	displayLinkedList(reverseHead);
	stack<int>s;
	int t = s.top();
	LinkedListNode<int>top(t);
	LinkedListNode<int>*test = &top;
	return 0;
}
