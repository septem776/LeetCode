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
    bool hasCycle(ListNode *head) {
        // IMPORTANT: Please reset any member data you declared, as
        // the same Solution instance will be reused for each test case.
        if(!head || !head->next || !head->next->next)
            return false;
        ListNode *p1 = head;
        ListNode *p2 = head;
        while(p1->next && p2->next && p2->next->next)
        {
            p1 = p1->next;
            p2 = p2->next->next;
            if(p1 == p2)
            {
                return true;
            }
        }
        return false;
    }
};