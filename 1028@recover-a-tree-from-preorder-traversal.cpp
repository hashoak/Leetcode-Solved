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
    int pi;
    TreeNode* recPreorder(string traversal,int pdep=1) {
        int val=0,dep=0,i=pi;
        while(traversal[i]!='-' && traversal[i]!='\0') val=val*10+(traversal[i]-'0'),i++;
        TreeNode* node=new TreeNode(val);
        pi=i;
        while(traversal[i]=='-') dep++,i++;
        if(dep!=pdep) return node;
        pi=i;
        node->left=recPreorder(traversal,pdep+1);
        i=pi;
        dep=0;
        while(traversal[i]=='-') dep++,i++;
        if(dep!=pdep) return node;
        pi=i;
        node->right=recPreorder(traversal,pdep+1);
        return node;
    }
    TreeNode* recoverFromPreorder(string traversal) {
        pi=0;
        return recPreorder(traversal,1);
    }
};