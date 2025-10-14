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
    map<int,int> x;
    TreeNode* rasputin(vector<int>& pre,vector<int>& in,int& i,int s,int e) {
        if(s>e) return NULL;
        TreeNode* head=new TreeNode(pre[i++]);
        head->left=rasputin(pre,in,i,s,x[head->val]-1);
        head->right=rasputin(pre,in,i,x[head->val]+1,e);
        return head;
    }
public:
    TreeNode* buildTree(vector<int>& pre, vector<int>& in) {
        for(int i=0;i<in.size();i++) x[in[i]]=i;
        int i=0;
        return rasputin(pre,in,i,0,in.size()-1);
    }
};