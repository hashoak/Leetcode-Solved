class Solution {
    int ans=0;
    void pavan(TreeNode *r,bool l,int c) {
        if(!r) return;
        ans=max(ans,c);
        if(l) pavan(r->right,0,c+1),pavan(r->left,1,1);
        else pavan(r->left,1,c+1),pavan(r->right,0,1);
    }

public:
    int longestZigZag(TreeNode* r,short lr=0) {
        pavan(r,0,0);
        pavan(r,1,0);
        return ans;
    }
};