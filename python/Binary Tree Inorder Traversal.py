# Definition for a  binary tree node
# class TreeNode:
#     def __init__(self, x):
#         self.val = x
#         self.left = None
#         self.right = None

class Solution:
    # @param root, a tree node
    # @return a list of integers
    def inorderTraversal(self, root):
        self.ans = []
        self.doTraversal(root)
        return self.ans

    def doTraversal(self, node):
    	if node is None:
    		return
    	self.doTraversal(node.left)
    	self.ans.append(node.val)
    	self.doTraversal(node.right)
