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
    ListNode *detectCycle(ListNode *head) {
        // IMPORTANT: Please reset any member data you declared, as
        // the same Solution instance will be reused for each test case.
        if(!head || !head->next || !head->next->next)
            return NULL;
        ListNode *p1 = head;
        ListNode *p2 = head;
        bool find = false;
        while(p1->next && p2->next && p2->next->next)
        {
            p1 = p1->next;
            p2 = p2->next->next;
            if(p1 == p2)
            {
                find = true;
                break;
            }
        }
        if(!find)
            return NULL;
        p2 = head;
        while(p1 != p2)
        {
            p1 = p1->next;
            p2 = p2->next;
        }
        return p1;
    }
};