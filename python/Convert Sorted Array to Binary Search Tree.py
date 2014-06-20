# Definition for a  binary tree node
class TreeNode:
    def __init__(self, x):
        self.val = x
        self.left = None
        self.right = None

class Solution:
    # @param num, a list of integers
    # @return a tree node
    def sortedArrayToBST(self, num):
        n = len(num)
        if n == 0:
            return None

        return self.constructTree(num, 0, n-1)

    def constructTree(self, num, indexl, indexr):
        if indexl > indexr:
            return None

        mid = (indexl + indexr) / 2 
        node = TreeNode(num[mid])

        if indexl == mid and indexr == mid:
            return node

        if indexl == mid:
            node.right = self.constructTree(num, mid+1, indexr)
            return node
        
        node.left = self.constructTree(num, indexl, mid-1)
        node.right = self.constructTree(num, mid+1, indexr)

        return node

