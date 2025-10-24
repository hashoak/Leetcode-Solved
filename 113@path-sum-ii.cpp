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
    void pardesiya(vector<vector<int>>& ans, TreeNode* root, int sum, vector<int>& path) {
        sum-=root->val;
        path.push_back(root->val);
        if(!root->left and !root->right) {
            if(!sum) ans.push_back(path);
        }
        else {
            if(root->left) pardesiya(ans,root->left,sum,path);
            if(root->right) pardesiya(ans,root->right,sum,path);
        }
        sum+=root->val;
        path.pop_back();
    }
public:
    vector<vector<int>> pathSum(TreeNode* root, int targetSum) {
        vector<vector<int>> ans;
        if(!root) return ans;
        vector<int> path;
        pardesiya(ans,root,targetSum,path);
        return ans;
    }
};