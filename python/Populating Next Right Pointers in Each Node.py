# Definition for a  binary tree node
class TreeNode:
    def __init__(self, x):
        self.val = x
        self.left = None
        self.right = None
        self.next = None

class Solution:
    # @param root, a tree node
    # @return nothing
    def connect(self, root):
        listNode = []
        listNode.append((root, 0))
        print(len(listNode))


if __name__ == '__main__':
    node = TreeNode(0)
    so = Solution()
    so.connect(node)