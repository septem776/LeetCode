# Definition for a  binary tree node
class TreeNode:
    def __init__(self, x):
        self.val = x
        self.left = None
        self.right = None

class Solution:
    # @param root, a tree node
    # @return a boolean
    def isBalanced(self, root):
        if root is None:
            return True
        diff = abs(self.maxHeight(root.left) - self.maxHeight(root.right))
        if diff > 1:
            return False

        return self.isBalanced(root.left) and self.isBalanced(root.right)

    def maxHeight(self, node):
        if node is None:
            return 0

        return 1 + max(self.maxHeight(node.left), self.maxHeight(node.right))