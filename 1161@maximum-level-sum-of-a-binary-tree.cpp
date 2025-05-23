class Solution {
    void vaaya(TreeNode* r,vector<int> &s,int l) {
        if(!r) return;
        if(s.size()==l) s.push_back(r->val);
        else s[l]+=r->val;
        vaaya(r->right,s,l+1);
        vaaya(r->left,s,l+1);
    }
public:
    int maxLevelSum(TreeNode* r) {
        vector<int> s;
        vaaya(r,s,0);
        int ans=1,m=s[0];
        for(int i=0;i<s.size();i++) if(s[i]>m) m=s[i],ans=i+1;
        return ans;
    }
};