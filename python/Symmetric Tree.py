#Definition for a  binary tree node
class TreeNode:
    def __init__(self, x):
        self.val = x
        self.left = None
        self.right = None

class Solution:
    # @param root, a tree node
    # @return a boolean
    def isSymmetric(self, root):
        if root is None:
            return True
        return self.complr(root.left, root.right)

    def complr(self, left, right):
        if left == None and right == None:
            return True

        elif left != None and right != None and left.val == right.val:
            return self.complr(left.left, right.right) and self.complr(left.right, right.left)

        else:
            return False

if __name__ == '__main__':
    so = Solution()
    root = TreeNode(1)
    root.left = TreeNode(2)
    root.right = TreeNode(2)
    print(so.isSymmetric(root))