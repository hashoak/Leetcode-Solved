class Solution {
public:
    vector<vector<int>> restoreMatrix(vector<int>& rs, vector<int>& cs) {
        vector<vector<int>> ans(rs.size(),vector<int> (cs.size()));
        for(int i=0;i<rs.size();i++) {
            for(int j=0;j<cs.size();j++) {
                int x=min(rs[i],cs[j]);
                ans[i][j]=x;
                rs[i]-=x,cs[j]-=x;
            }
        }
        return ans;
    }
};
//    08 06 08
// 05 05 00 00
// 07 03 04 00   
// 10 00 02 08