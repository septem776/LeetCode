/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode(int x) : val(x), next(NULL) {}
 * };
 */
class Solution {
public:
    ListNode *mergeTwoLists(ListNode *l1, ListNode *l2) {
        // Start typing your C/C++ solution below
        // DO NOT write int main() function
        if(l1 == 0)
            return l2;
        if(l2 == 0)
            return l1;
        if(l1->val <= l2->val)
            return merge(l1, l2);
        else
            return merge(l2, l1);
    }
    ListNode *merge(ListNode *l1, ListNode *l2)
    {
        ListNode *head = l1;
        ListNode *p, *q, *r, *s;
        do
        {
        
            p = l1;
            q = l1->next;
            r = l2;
            while(l2 && q && l2->val <= q->val)
            {
                s = l2;
                l2 = l2->next;
            }
            if(r != l2)
            {
                p->next = r;
                s->next = q;
            }
            l1 = q;
        } while(l1);
        if(l2)
        {
            p->next = l2;
        }
        return head;
        
    }
    
};