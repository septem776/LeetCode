# Definition for singly-linked list.
# class ListNode:
#     def __init__(self, x):
#         self.val = x
#         self.next = None

class Solution:
    # @param head, a ListNode
    # @return a ListNode
    def deleteDuplicates(self, head):
        if head is None:
            return head
        p = head
        q = head.next
        while p != None and q != None:
            while p.val == q.val:
                q = q.next
                if q is None:
                    break
            if q != p.next:
                p.next = q
                p = q
                if q != None:
                    q = q.next
                continue

            p = p.next
            q = q.next
        return head