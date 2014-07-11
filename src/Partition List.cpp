//Definition for singly-linked list.
struct ListNode {
    int val;
    ListNode *next;
    ListNode(int x) : val(x), next(NULL) {}
};

class Solution {
public:
    ListNode *partition(ListNode *head, int x) {
        if(!head)
            return head;
        
        ListNode *p = head;
        bool bNewHead = false;
        if(head->val >= x)
        {
            p = new ListNode(-1);
            p->next = head;
            bNewHead = true;
        }
        else
        {
            while(p && p->next)
            {
                if(p->next->val >= x)
                    break;
                p = p->next;
            }
            if(!p || !p->next)
                return head;
        }
        
        ListNode *q = p->next;
        ListNode *r = q->next;
        while(r)
        {
            if(r->val < x)
            {
                if(bNewHead)
                {
                    bNewHead = false;
                    head = r;
                }
                q->next = r->next;
                r->next = p->next;
                p->next = r;
                p = p->next;
                r = q->next;
            }
            else
            {
                q = q->next;
                r = r->next;
            }           
        }
        return head;
    }
};