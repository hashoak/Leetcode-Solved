class Solution {
public:
    vector<int> rightSideView(TreeNode* r) {
        vector<int> ans;
        queue<TreeNode*> q;
        q.push(NULL);
        q.push(r);
        while(q.front()!=q.back())
        {
            if(q.front()==NULL) ans.push_back(q.back()->val),q.push(NULL),q.pop();
            TreeNode *t=q.front();
            q.pop();
            if(t->left) q.push(t->left);
            if(t->right) q.push(t->right);
        }
        return ans;
    }
};