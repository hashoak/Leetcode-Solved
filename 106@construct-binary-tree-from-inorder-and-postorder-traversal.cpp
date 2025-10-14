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
    TreeNode* sultan(vector<int>& post,vector<int>& in,int& i,int s,int e) {
        if(s>e) return NULL;
        TreeNode* head=new TreeNode(post[i--]);
        head->right=sultan(post,in,i,x[head->val]+1,e);
        head->left=sultan(post,in,i,s,x[head->val]-1);
        return head;
    }
public:
    TreeNode* buildTree(vector<int>& in, vector<int>& post) {
        for(int i=0;i<in.size();i++) x[in[i]]=i;
        int i=post.size()-1;
        return sultan(post,in,i,0,in.size()-1);
    }
};