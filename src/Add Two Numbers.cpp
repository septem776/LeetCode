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
    ListNode *addTwoNumbers(ListNode *l1, ListNode *l2) {
        // Start typing your C/C++ solution below
        // DO NOT write int main() function
        ListNode *sum = new ListNode(0);
        ListNode *p = sum;
        int carry = 0;
        while(1)
        {
            if(l1!=NULL && l2!=NULL)
            {
                p->val = (l1->val + l2->val + carry) % 10;
                carry = (l1->val + l2->val + carry)>=10?1:0;
                l1 = l1->next;
                l2 = l2->next;
            }
            else if(l1 == NULL && l2!=NULL)
            {
                p->val = (l2->val + carry) % 10;
                carry = (l2->val + carry)>=10?1:0;
                l2 = l2->next;
            }
            else if(l2 == NULL && l1!=NULL)
            {
                p->val = (l1->val + carry) % 10;
                carry = (l1->val + carry)>=10?1:0;
            
                l1 = l1->next;
            }
            else
            {
                p->next = NULL;
                break;
            }
            if(l1 != NULL || l2 !=NULL || carry == 1)
            {
                p->next = new ListNode(carry);
                p = p->next;
            }
        }
        return sum;
    }
};