#include <bits/stdc++.h>
template<class T1>
class LinkedListNode
{
	public:
		T1 val;
		LinkedListNode<T1>*next;
		LinkedListNode(T1 val)
		{
			this->val = val;
			this->next = nullptr;
		}
};
template<class T2>
void displayList(LinkedListNode<T2>*head)
{
	if(head == nullptr)
		std::cout << "Empty llist " << std::endl;
	while(head != nullptr)
	{
		std::cout << head->val << " " << "-->" << " ";
		head = head->next;
	}
}
