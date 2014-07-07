# Definition for a  binary tree node
# class TreeNode:
#     def __init__(self, x):
#         self.val = x
#         self.left = None
#         self.right = None

class Solution:
    # @param root, a tree node
    # @return a list of lists of integers
    def levelOrderBottom(self, root):
        ret = []
        if root is None:
            return ret

        level = 0
        curlevel = 0
        nodelist = []
        q = []
        q.append((level, root))
        while len(q) > 0:
            curlevel, node = q.pop(0)
            if curlevel != level:
                level = curlevel
                ret.append(nodelist)
                nodelist = []
            
            nodelist.append(node.val)
            if node.left != None:
                q.append((curlevel+1, node.left))
            if node.right != None:
                q.append((curlevel+1, node.right))

        ret.append(nodelist)
        ret.reverse()
        return ret

