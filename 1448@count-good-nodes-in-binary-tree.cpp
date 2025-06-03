/**
 * Definition for a binary tree node.
 * struct TreeNode {
 *     int val;
 *     TreeNode *left;
 *     TreeNode *right;
 *     TreeNode() : val(0), left(nullptr), right(nullptr) {}
 *     TreeNode(int x) : val(x), left(nullptr), right(nullptr) {}
 *     TreeNode(int x, TreeNode *left, TreeNode *right) : val(x), left(left), right(right) {}
 * };
 */
class Solution {
public:
    void nadh(TreeNode *r,int m,int &ans) {
        if(!r) return;
        if(m<=r->val) ans++,m=r->val;
        nadh(r->left,m,ans);
        nadh(r->right,m,ans);
    }
    int goodNodes(TreeNode* r) {
        int ans=0;
        nadh(r,r->val,ans);
        return ans;
    }
};