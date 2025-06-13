# Definition for a binary tree node.
# class TreeNode:
#     def __init__(self, val=0, left=None, right=None):
#         self.val = val
#         self.left = left
#         self.right = right
class Solution:
    def isEvenOddTree(self, root: Optional[TreeNode]) -> bool:
        q=[root,None]
        l,p=0,None
        while q:
            if ((l+1)%2 and p and p.val>=q[0].val) or (l%2 and p and p.val<=q[0].val) or q[0].val%2!=(l+1)%2: return 0
            p=q[0]
            if q[0].left: q.append(q[0].left)
            if q[0].right: q.append(q[0].right)
            q.pop(0)
            if q[0]==None:
                q.pop(0)
                if len(q): q.append(None);p=None
                l+=1
        return 1



            
        