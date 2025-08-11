/**
 * Definition for a binary tree node.
 * struct TreeNode {
 *     int val;
 *     TreeNode *left;
 *     TreeNode *right;
 *     TreeNode(int x) : val(x), left(NULL), right(NULL) {}
 * };
 */
class Codec
{
public:
    string data;
    // Encodes a tree to a single string.
    string serialize(TreeNode* root)
    {
        if(root==NULL) return "null";
        return to_string(root->val)+"~"+serialize(root->left)+"~"+serialize(root->right);
    }

    TreeNode* recur()
    {
        int i=0;
        string n="";
        while(data[i]!='~') n+=data[i++];
        data.erase(0,i+1);
        if(n=="null") return NULL;
        TreeNode* root=new TreeNode(stoi(n));
        root->left=recur();
        root->right=recur();
        return root;

    }
    
    // Decodes your encoded data to tree.
    TreeNode* deserialize(string data)
    {
        this->data=data+"~";
        return recur();
    }
};

// Your Codec object will be instantiated and called as such:
// Codec ser, deser;
// TreeNode* ans = deser.deserialize(ser.serialize(root));