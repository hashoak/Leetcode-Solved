class Solution {
    void takkara(vector<vector<int>> &c,int p,vector<bool> &v) {
        v[p]=1;
        for(int i=0;i<c[p].size();i++)
            if(c[p][i] && !v[i]) takkara(c,i,v);
    }
    
public:
    int findCircleNum(vector<vector<int>>& c) {
        vector<bool> v(c.size(),0);
        int ans=0;
        for(int i=0;i<c.size();i++) {
            if(!v[i]) {
                ans++;
                takkara(c,i,v);
            }
        }
        return ans;
    }
};