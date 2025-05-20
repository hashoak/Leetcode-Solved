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
    vector<TreeNode*> ans;
    TreeNode* findOrErase(TreeNode* r, vector<int>& d,bool er)
    {
        if(!r) return nullptr;
        auto x=find(d.begin(),d.end(),r->val);
        if(er) {
            // if(x!=d.end()) d.erase(x);
            if(x==d.end()) {
                er=0;
                ans.push_back(r);
            }
        }
        else if(x!=d.end()) {
            er=1;
            // d.erase(x);
        }
        r->left=findOrErase(r->left,d,er);
        r->right=findOrErase(r->right,d,er);
        if(er) return nullptr;
        return r;
    }

    vector<TreeNode*> delNodes(TreeNode* r, vector<int>& d) {
        findOrErase(r,d,1);
        return ans;
    }
};