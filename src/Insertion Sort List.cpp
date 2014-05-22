#include <vector>
#include <iostream>
#include <stack>
#include <string>
#include <sstream>
using namespace std;


// Definition for singly-linked list.
struct ListNode {
    int val;
    ListNode *next;
    ListNode(int x) : val(x), next(NULL) {}
};

class Solution {
public:
    ListNode *insertionSortList(ListNode *head) {
        ListNode *retHead = new ListNode(0);
		ListNode *p, *q;
		if(!head)
			return head;
		while(head)
		{
			p = retHead;
			q = retHead->next;
			ListNode *pNode = new ListNode(head->val);
			while(q && q->val < head->val)
			{
				p = q;
				q = q->next;
			}
			p->next = pNode;
			pNode->next = q;
			head = head->next;
		}
		return retHead->next;
    }
};

int main()
{
	ListNode *node = new ListNode(1);
	Solution so;
	so.insertionSortList(node);
	return 0;
}