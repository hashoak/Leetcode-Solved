class Solution {
    TreeNode* jaragandi(TreeNode *r,int k) {
        if(!r) return r;
        if(k<r->val) r->left=jaragandi(r->left,k);
        else if(k>r->val) r->right=jaragandi(r->right,k);
        else {
            if(!r->left) {
                TreeNode* t=r->right;
                delete r;
                return t;
            }
            if(!r->right) {
                TreeNode* t=r->left;
                delete r;
                return t;
            }
            TreeNode* t=r->right;
            while(t->left) t=t->left;
            r->val=t->val;
            r->right=jaragandi(r->right,t->val);
        }
        return r;
    }
public:
    TreeNode* deleteNode(TreeNode* r,int k) {
        r=jaragandi(r,k);
        return r;
    }
};