# Definition for a  binary tree node
# class TreeNode:
#     def __init__(self, x):
#         self.val = x
#         self.left = None
#         self.right = None

class Solution:
    # @param root, a tree node
    # @return a list of integers
    def preorderTraversal(self, root):
        self.ans = []
        self.doTraversal(root)
        return self.ans

    def doTraversal(self, t):
        if t == None:
            return None
        else:
            self.ans.append(t.val)
        if t.left != None:
            self.doTraversal(t.left)
        if t.right != None:
            self.doTraversal(t.right)
        return None