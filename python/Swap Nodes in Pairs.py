# Definition for singly-linked list.
class ListNode:
    def __init__(self, x):
        self.val = x
        self.next = None

class Solution:
    # @param a ListNode
    # @return a ListNode
    def swapPairs(self, head):
        if head is None or head.next is None:
            return head

        retHead = head.next
        p = head
        q = head.next
        while True:
            p.next = q.next
            q.next = p
            p = p.next
            if p is None or p.next is None:
                break
            if p.next != None:
                q.next.next = p.next
                q = p.next

        return retHead