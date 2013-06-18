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
    ListNode *mergeKLists(vector<ListNode *> &lists) {
        // Start typing your C/C++ solution below
        // DO NOT write int main() function
        int num = lists.size();
        if(num == 0)
            return 0;
        if(num == 1)
            return lists[0];
        ListNode *p[100];
        for(int i=0; i<num; i++)
        {
            p[i] = lists[i];
        }
        ListNode *ret = new ListNode(0);
        ListNode *q = ret;
    	ret->next = NULL;
        int end_num = 0;
        while(1)
        {
            int min = 2147483647;
            int ins_idx = 0;
            end_num = 0;
            for(int i=0; i<num; i++)
            {
                if(p[i] == 0)
                {
                    end_num++;
                    continue;
                }
                if(min > p[i]->val)
                {
                    min = p[i]->val;
                    ins_idx = i;
                }
            }
            if(end_num == num)
                break;
            ListNode *r = new ListNode(min);
            q->next = r;
            r->next = NULL;
            q = r;
            p[ins_idx] = p[ins_idx]->next;
        }
        return ret->next;
    }
};