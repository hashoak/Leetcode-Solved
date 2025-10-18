# Definition for a binary tree node.
# class TreeNode:
#     def __init__(self, val=0, left=None, right=None):
#         self.val = val
#         self.left = left
#         self.right = right
class Solution:
    def sortedArrayToBST(self, n: List[int]) -> Optional[TreeNode]:
        if n: return TreeNode(n[len(n)//2],self.sortedArrayToBST(n[:len(n)//2]),self.sortedArrayToBST(n[len(n)//2+1:]))
        