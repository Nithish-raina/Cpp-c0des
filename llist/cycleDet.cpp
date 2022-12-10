#include <bits/stdc++.h>
#include <list>
#include "NodeTemplate.h"
using namespace std;
int main(void) {
	LinkedListNode<int>head(1);
	LinkedListNode<int>n1(2);
	LinkedListNode<int>n2(-1);
	LinkedListNode<int>n3(4);
	head.next = &n1;
	n1.next = &n2;
	n2.next = &n3;
	n3.next = &n1;
	unordered_map<LinkedListNode<int>*,bool> seen;
    	bool cycleDet = false;
	LinkedListNode<int>*temp = &head;
	while(temp->next != nullptr) {
		if(seen.find(temp->next) != seen.end())
            cycleDet = true;
		if(cycleDet == true)
			break;
		seen[temp->next] = true;
		temp = temp->next;
	}
	cout<<"Cycle is "<<cycleDet<<endl;
	return 0 == 0;
}
