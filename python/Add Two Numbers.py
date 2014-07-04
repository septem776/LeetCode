# Definition for singly-linked list.
class ListNode:
    def __init__(self, x):
        self.val = x
        self.next = None

class Solution:
    # @return a ListNode
    def addTwoNumbers(self, l1, l2):
        carry = 0
        lSum = ListNode(0)
        p = lSum
        while True:
            if l1 != None and l2 != None:
                sum = l1.val + l2.val + carry 
                l1 = l1.next
                l2 = l2.next
            elif l1 != None:
                sum = l1.val + carry
                l1 = l1.next
            elif l2 != None:
                sum = l2.val + carry
                l2 = l2.next
            else:
                if carry == 1:
                    q = ListNode(1)
                    p.next = q
                return lSum

            p.val = sum % 10
            carry = sum / 10
            if l1 != None or l2 != None:
                q = ListNode(0)
                p.next = q
                p = q


if __name__ == '__main__':
    so = Solution()
    l1 = ListNode(0)
    l2 = ListNode(1)
    print(so.addTwoNumbers(l1, l2).val)