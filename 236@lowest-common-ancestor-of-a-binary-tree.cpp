class Solution {
public:
    TreeNode* lowestCommonAncestor(TreeNode* r, TreeNode* p, TreeNode* q) {
        if(!r || r==p || r==q) return r;
        TreeNode *a=lowestCommonAncestor(r->left,p,q);
        TreeNode *b=lowestCommonAncestor(r->right,p,q);
        if(!a) return b;
        if(!b) return a;
        else return r;
    }
};