class Solution {
public:
    int minFlips(vector<vector<int>>& g) {
        int n=g.size(),m=g[0].size();
        int f1=0,f2=0;
        for(int i=0;i<n;i++)
            for(int j=0;j<m/2;j++)
                f1+=(g[i][j]!=g[i][m-1-j]);
        for(int i=0;i<m;i++)
            for(int j=0;j<n/2;j++)
                f2+=(g[j][i]!=g[n-1-j][i]);
        return min(f1,f2);
    }
};