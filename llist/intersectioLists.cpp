#include <bits/stdc++.h>
#include "NodeTemplate.h"
int main(void)
{
	using std::cout;
	using std::endl;
	LinkedListNode<int>headA(4);
	LinkedListNode<int>a2(1);
	LinkedListNode<int>a3(8);
	LinkedListNode<int>a4(4);
	LinkedListNode<int>a5(5);
	headA.next = &a2;
	a2.next = &a3;
	a3.next = &a4;
	a4.next = &a5;
	LinkedListNode<int>headB(5);
	LinkedListNode<int>b2(6);
	LinkedListNode<int>b3(1);
	headB.next = &b2;
	b2.next = &b3;
	b3.next = &a3;
	LinkedListNode<int>* p1 = &headA;
    LinkedListNode<int>* p2 = &headB;
    if(p1 == nullptr || p2 == nullptr)
        cout << "No intersection "<< endl;
    while(p1 != p2)
    {
        p1 = (p1 == nullptr) ? &headB : p1->next;
        p2 = (p2 == nullptr) ? &headA : p2->next; 
    }
	cout<<"Intersection is at"<<" "<< p1->val << endl;
	return 0;
}
