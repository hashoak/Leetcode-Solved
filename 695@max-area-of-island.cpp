class Solution {
public:
    int maxAreaOfIsland(vector<vector<int>>& g) {
        int n=g.size(),m=g[0].size(),ans=0;
        for(int i=0;i<n;i++) {
            for(int j=0;j<m;j++) {
                if(g[i][j]) {
                    queue<pair<int,int>> q;
                    q.push({i,j});
                    g[i][j]=0;
                    int ar=0;
                    while(!q.empty()) {
                        int x=q.front().first,y=q.front().second;
                        q.pop();
                        ar++;
                        if(x+1<n && g[x+1][y])
                            g[x+1][y]=0,q.push({x+1,y});
                        if(x-1>=0 && g[x-1][y])
                            g[x-1][y]=0,q.push({x-1,y});
                        if(y+1<m && g[x][y+1])
                            g[x][y+1]=0,q.push({x,y+1});
                        if(y-1>=0 && g[x][y-1])
                            g[x][y-1]=0,q.push({x,y-1});
                    }
                    ans=max(ans,ar);
                }
            }
        }
        return ans;
    }
};