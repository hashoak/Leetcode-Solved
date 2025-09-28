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
    bool veera(TreeNode* l,TreeNode* r) {
        if(!l and !r) return 1;
        if(!l or !r) return 0;
        return veera(l->right,r->left) and veera(l->left,r->right) and l->val==r->val;
    }
public:
    bool isSymmetric(TreeNode* root) {
        TreeNode *l=root->left,*r=root->right;
        return veera(l,r);
    }
};