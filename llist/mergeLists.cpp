#include <bits/stdc++.h>
#include <cstdint>
#include <list>
#include <sys/types.h>
using namespace std;
int main(void)
{
	if(!list1)
		return list2;
    if(!list2)
        return list1;
    ListNode * destHead = nullptr;
    if(list1->val < list2->val)
    {
        destHead = list1;
        list1 = list1->next;
    }
    else
    {
		destHead = list2;
        list2 = list2->next;
    }
    ListNode * prev = destHead;
    while(list1 && list2)
    {
		if(list1->val < list2->val)
        {
            prev->next = list1;
            list1 = list1->next;
        }
        else
        {
            prev->next = list2;
            list2 = list2->next;
        }
        prev = prev->next;
    }
    if(!list1)
		prev->next = list2;
    else
        prev->next = list1;
    return destHead;
	return 0;
}
