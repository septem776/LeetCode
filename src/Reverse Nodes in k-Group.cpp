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
    ListNode *reverseKGroup(ListNode *head, int k) {
        // Start typing your C/C++ solution below
        // DO NOT write int main() function
        ListNode *ret = head;
        int count = 0;
        ListNode *end = head;
        while(head)
        {
            ListNode *p = head;            
            for(int i=1; i<k; i++)
            {
                head = head->next;
                if(head == NULL)
                    break;
            }
            if(head)
            {
                if(count == 0)
                    ret = head;
                else
                {
                    ListNode *tmp = end->next;
                    end->next = head;
                    end = tmp;
                }
                for(int i=1; i<k; i++)
                {
                    ListNode *tmp = p->next;
                    p->next = head->next;
                    head->next = p;
                    p = tmp;
                }
                head = end->next;            
            } 
            count++;
        }
        return ret;
    }
};