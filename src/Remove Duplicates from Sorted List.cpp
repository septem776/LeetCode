#include <vector>
#include <iostream>
#include <stack>
#include <string>
#include <sstream>
using namespace std;

//Definition for singly-linked list.
struct ListNode {
    int val;
    ListNode *next;
    ListNode(int x) : val(x), next(NULL) {}
};

class Solution {
public:
    ListNode *deleteDuplicates(ListNode *head) {
        if(!head)
			return head;
		ListNode *p = head;
		ListNode *q = head->next;
		while(p && q)
		{
			while(p->val == q->val)
			{
				q = q->next;
				if(!q)
					break;
			}
			if(q != p->next)
			{
				p->next = q;
				p = q;
				if(q)
					q = q->next;
				continue;
			}
			p = p->next;
			q = q->next;
		}
		return head;
    }
};

int main()
{
	ListNode *node = new ListNode(1);
	Solution so;
	
	return 0;
}