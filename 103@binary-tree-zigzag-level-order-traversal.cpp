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
    vector<vector<int>> zigzagLevelOrder(TreeNode* root) {
        vector<vector<int>> ans;
        if(!root) return ans;
        queue<TreeNode*> q;
        q.push(root);
        q.push(NULL);
        vector<int> v;
        bool r=0;
        while(q.size()>1) {
            if(!q.front()) {
                q.pop(),q.push(NULL);
                if(r) reverse(v.begin(),v.end());
                ans.push_back(v);
                v.resize(0);
                r=!r;
            }
            TreeNode* t=q.front();
            q.pop();
            v.push_back(t->val);
            if(t->left) q.push(t->left);
            if(t->right) q.push(t->right);
        }
        if(r) reverse(v.begin(),v.end());
        ans.push_back(v);
        return ans;
    }
};