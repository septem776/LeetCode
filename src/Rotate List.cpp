//Definition for singly-linked list.
struct ListNode {
    int val;
    ListNode *next;
    ListNode(int x) : val(x), next(NULL) {}
};

class Solution {
public:
    ListNode *rotateRight(ListNode *head, int k) {
        if(!head || k == 0)
            return head;
        int len = 0;
        ListNode *p = head;
        for( ; p != NULL; p = p->next)
            len++;
        if(k % len == 0)
            return head;
        int offset = len - k % len - 1;
        p = head;
        for(int i = 0; i < offset; i++)
        {
            p = p->next;
        }
        ListNode *q = p->next;
        ListNode *ret = q;
        p->next = NULL;
        while(q->next)
        {
            q = q->next;
        }
        q->next = head;
        return ret;
    }
};