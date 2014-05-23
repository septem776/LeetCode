# class ListNode:
#     def __init__(self, x):
#         self.val = x
#         self.next = None
 
class Solution:
    # @param two ListNodes
    # @return a ListNode
    def mergeTwoLists(self, l1, l2):
        flag = True;
        head = None; curr = ListNode(0)
        p1 = l1; p2 = l2
        while p1 and p2:
            if p1.val <= p2.val:
                curr.next = ListNode(p1.val); p1 = p1.next
            else:
                curr.next = ListNode(p2.val); p2 = p2.next
            if flag:
                head = curr.next; flag = False
            curr = curr.next
        while p1:
            curr.next = ListNode(p1.val); p1 = p1.next
            if flag:
                head = curr.next; flag = False
            curr = curr.next
        while p2:
            curr.next = ListNode(p2.val); p2 = p2.next
            if flag:
                head = curr.next; flag = False
            curr = curr.next
        return head