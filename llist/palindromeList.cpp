#include <bits/stdc++.h>
#include <sys/types.h>
#include "NodeTemplate.h"
LinkedListNode<u_int16_t>*reverseSecondHalf(LinkedListNode<u_int16_t>*head)
{
	LinkedListNode<u_int16_t>*reverseHead = nullptr;
	LinkedListNode<u_int16_t>*curr = head;
	while(curr != nullptr)
	{
		LinkedListNode<u_int16_t>*currNext = curr->next;
		curr->next = reverseHead;
		reverseHead = curr;
		curr = currNext;
	}
	return reverseHead;
}
int main(void)
{
	using std::cout;
	using std::endl;
	LinkedListNode<u_int16_t>head(1);
	LinkedListNode<u_int16_t>n1(2);
	LinkedListNode<u_int16_t>n2(2);
	LinkedListNode<u_int16_t>n3(1);
	head.next = &n1;
	n1.next = &n2;
	n2.next = &n3;
	bool isPal = true; 
	LinkedListNode<u_int16_t>*firstEnd = nullptr;
	LinkedListNode<u_int16_t>*slow = &head;
	LinkedListNode<u_int16_t>*fast = &head;
	while(fast != nullptr && fast->next == nullptr)
	{
		firstEnd = slow;
		slow = slow->next;
		fast = fast->next->next;
	}
	if(fast->next == nullptr)
		slow = slow->next;  // excluding middle for odd no of nodes and iterate from mid+1
	if(slow == nullptr)
			isPal = true;
	firstEnd->next= nullptr;    //end of First sub linked list
	LinkedListNode<u_int16_t>*firstStart = &head;
	LinkedListNode<u_int16_t>*secondStart = reverseSecondHalf(slow);
	while(firstStart != nullptr)
	{
		if(firstStart->val != secondStart->val)
			isPal = false;
		firstStart = firstStart->next;
		secondStart = secondStart->next;
	}
	if(!isPal)
		cout<<"Not a palindrome " <<endl;
	else
		cout<<"Is a palindrome" << endl;
	return 0;
}
