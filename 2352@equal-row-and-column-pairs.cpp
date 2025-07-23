class Solution {
public:
    int equalPairs(vector<vector<int>>& g) {
        map<vector<int>,int> m;
        for(auto &i:g) m[i]++;
        for(int i=1;i<g.size();i++)
            for(int j=0;j<i;j++)
                swap(g[i][j],g[j][i]);
        int ans=0;
        for(auto &i:g) if(m[i]) ans+=m[i];
        return ans;
    }
};