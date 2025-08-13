class Solution {
public:
    int minFlips(vector<vector<int>>& g) {
        int ans=0,x,noo=0,nof=0;
        for(int i=0;i<g.size()/2;i++) {
            for(int j=0;j<g[0].size()/2;j++) {
                x=g[i][j]+g[i][g[0].size()-1-j]+g[g.size()-1-i][j]+g[g.size()-1-i][g[0].size()-1-j];
                ans+=min(x,4-x);
            }
        }
        if(g.size()%2) {
            for(int j=0;j<g[0].size()/2;j++) {
                if(g[g.size()/2][j]!=g[g.size()/2][g[0].size()-1-j]) nof++;
                else if(g[g.size()/2][j]==1) noo+=2;
            }
        }
        if(g[0].size()%2) {
            for(int i=0;i<g.size()/2;i++) {
                if(g[i][g[0].size()/2]!=g[g.size()-1-i][g[0].size()/2]) nof++;
                else if(g[i][g[0].size()/2]==1) noo+=2;
            }
        }
        if(g.size()%2 && g[0].size()%2 && g[g.size()/2][g[0].size()/2]==1) ans++;
        if(noo%4==2 && nof==0) ans+=2;
        return ans+nof;
    }
};