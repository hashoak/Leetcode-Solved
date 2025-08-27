class Solution {
    int ans=0;
    void yoga(TreeNode* r,int ts,vector<int> &s) {
        if(!r) return;
        s.push_back(r->val);
        long long t=0;
        for(int i=s.size()-1;i>=0;i--) {
            t+=s[i];
            if(t==ts) ans++;
        }
        yoga(r->left,ts,s);
        yoga(r->right,ts,s);
        s.pop_back();
        return;
    }

public:
    int pathSum(TreeNode* r, int ts) {
        vector<int> s;
        yoga(r,ts,s);
        return ans;
    }
};