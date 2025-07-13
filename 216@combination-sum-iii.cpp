class Solution {
    void gimme(vector<vector<int>> &ans,int k,int n,int p,vector<int> &a) {
        if(k<=0 || n<=0) {
            if(!k && !n) ans.push_back(a);
            return;
        }
        for(int i=p+1;i<=min(9,n/k);i++) {
            a.push_back(i);
            gimme(ans,k-1,n-i,i,a);
            a.pop_back();
        }
    }
public:
    vector<vector<int>> combinationSum3(int k,int n) {
        vector<vector<int>> ans;
        vector<int> a;
        gimme(ans,k,n,0,a);
        return ans;
    }
};