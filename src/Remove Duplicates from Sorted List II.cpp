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
    ListNode *deleteDuplicates(ListNode *head) {
        // Start typing your C/C++ solution below
        // DO NOT write int main() function
        if(!head || !head->next)
            return head;
        ListNode *p = head;
        ListNode *q = head->next;
        
        unordered_set<int> s;
        unordered_set<int> todel;
        s.insert(head->val);
        while(q)
        {
            if(s.count(q->val) == 0)
            {
                s.insert(q->val);
                p = p->next;
                q = q->next;
            }
            else
            {
                todel.insert(q->val);
                p->next = q->next;
                delete q;
                q = p->next;
            }
            
        }
        while(head && todel.count(head->val) > 0)
        {
            p = head;
            head = head->next;
            delete p;
        }
        if(!head || !head->next)
            return head;
        p = head;
        q = head->next;
        while(q)
        {
            if(todel.count(q->val) > 0)
            {
                p->next = q->next;
                delete q;
                q = p->next;
            }
            else
            {
                p = p->next;
                q = q->next;
            }
        }
        return head;
    }
};