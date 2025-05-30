class Solution {
public:
    vector<int> luckyNumbers (vector<vector<int>>& mat) {
        int tmi=mat[0][0];
        for(int j=1;j<mat[0].size();j++) tmi=min(tmi,mat[0][j]);
        for(int i=1;i<mat.size();i++) {
            for(int j=0;j<mat[0].size();j++) {
                mat[i][0]=min(mat[i][0],mat[i][j]);
                mat[0][j]=max(mat[0][j],mat[i][j]);
            }
        }
        vector<int> ans;
        for(int j=0;j<mat[0].size();j++)
            if(tmi==mat[0][j])
                ans.push_back(tmi);
        for(int i=1;i<mat.size();i++) {
            for(int j=0;j<mat[0].size();j++) {
                // cout<<mat[i][0]<<" "<<mat[0][j]<<"\n";
                // cout<<mat[i][j]<<" ";
                if(mat[0][j]==mat[i][0])
                    ans.push_back(mat[i][0]);
            }
            // cout<<"\n";
        }
        return ans;
    }
};
//    15 16 17 12
//  1  1 10  4  2
//  3  9  3  8  7
// 12 15 16 17 12