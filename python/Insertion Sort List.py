# Definition for singly-linked list.
# class ListNode:
#     def __init__(self, x):
#         self.val = x
#         self.next = None

class Solution:
    # @param head, a ListNode
    # @return a ListNode
    def insertionSortList(self, head):
        if head == None:
            return head
        i = head
        bSorted = True
        while i != None and i.next != None:
            if i.val > i.next.val:
                bSorted = False
                break
            i = i.next
        if bSorted is True:
            return head

        ret = ListNode(head.val)
        while head.next != None:
            head = head.next
            p = q = ret
            while p != None and p.val < head.val:
                q = p
                p = p.next
            newnode = ListNode(head.val)
            if p == q:
                newnode.next = p
                ret = newnode
            else:
                q.next = newnode
                newnode.next = p
        return ret