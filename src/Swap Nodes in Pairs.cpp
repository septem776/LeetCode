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
    ListNode *swapPairs(ListNode *head) {
        // Start typing your C/C++ solution below
        // DO NOT write int main() function
        int nodenum = 0;
        ListNode *p = head;
        while(p != NULL)
        {
            nodenum++;
            p = p->next;
        }
        if(nodenum<2)
            return head;
        p = head;
        ListNode *q = p->next;
        head = q;
        p->next = q->next;
        q->next = p;
        int n = nodenum / 2;
        while(n>1)
        {
            p = p->next;
            q = q->next;
            q->next = p->next;
            q = p->next;
            p->next = q->next;
            q->next = p;
            n--;
        }
        return head;        
    }
};