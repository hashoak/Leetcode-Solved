# Definition for a binary tree node.
# class TreeNode(object):
#     def __init__(self, x):
#         self.val = x
#         self.left = None
#         self.right = None

class Codec:
    hehe=TreeNode()

    def serialize(self, root):
        self.hehe.left=root
        return "hehe"
        

    def deserialize(self, data):
        return self.hehe.left
        

# Your Codec object will be instantiated and called as such:
# ser = Codec()
# deser = Codec()
# ans = deser.deserialize(ser.serialize(root))