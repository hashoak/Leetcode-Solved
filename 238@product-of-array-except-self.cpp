class Solution {
public:
    vector<int> productExceptSelf(vector<int>& n) {
        int l=n.size();
        vector<int> ans(l);
        int p=1,s=1;
        for(int i=0;i<l;i++) ans[i]=p,p*=n[i];
        for(int i=l-1;i>-1;i--) ans[i]*=s,s*=n[i];
        return ans;
    }
};