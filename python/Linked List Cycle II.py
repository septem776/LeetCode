# Definition for singly-linked list.
# class ListNode:
#     def __init__(self, x):
#         self.val = x
#         self.next = None

class Solution:
    # @param head, a ListNode
    # @return a list node
    def detectCycle(self, head):
        find = False
        p = q = head
        while p != None and q != None and q.next != None:
            p = p.next
            q = q.next.next
            if p == q:
                find = True
                break

        if not find:
            return None

        while head != p:
            head = head.next
            p = p.next

        return head