# Definition for a binary tree node.
# class TreeNode(object):
#     def __init__(self, val=0, left=None, right=None):
#         self.val = val
#         self.left = left
#         self.right = right
class Solution(object):
    def findBottomLeftValue(self, root):
        q=[root]
        while q:
            n=q.pop(0)
            blv=n.val
            if n.right!=None: q.append(n.right)
            if n.left!=None: q.append(n.left)
        return blv
        