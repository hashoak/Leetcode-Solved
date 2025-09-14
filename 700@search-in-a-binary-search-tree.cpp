class Solution {
public:
    TreeNode* searchBST(TreeNode* r,int v) {
        while(r && r->val!=v)
            r= v<r->val ? r->left : r->right;
        return r;
    }
};