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
    ListNode *removeNthFromEnd(ListNode *head, int n) {
        // Start typing your C/C++ solution below
        // DO NOT write int main() function
        ListNode *p = head;
        int node_num = 0;
        while(p !=NULL)
        {
            node_num++;
            p = p->next;
        }
        int rm_num = node_num - n;
        if(rm_num == 0)
        {
            p = head;
            head = head->next;
            free(p);
            return head;
        }
        p = head;
        while(--rm_num > 0)
        {
            p = p->next;
        }
        ListNode *q = p->next;
        p->next = q->next;
        free(q);
        return head;
    }
};