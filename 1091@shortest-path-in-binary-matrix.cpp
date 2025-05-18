class Solution {
public:
    int shortestPathBinaryMatrix(vector<vector<int>>& g) {
        int n=g.size();
        if(g[0][0] || g[n-1][n-1]) return -1;
        int ans[n][n];
        for(int i=0;i<n;i++)
            for(int j=0;j<n;j++)
                ans[i][j]=g[i][j];
        ans[0][0]=1;
        queue<int> qi,qj;
        qi.push(0),qj.push(0);
        while(!qi.empty()) {
            int i=qi.front(),j=qj.front(),x=ans[i][j]+1;
            qi.pop(),qj.pop();
            if(i==n-1 && j==n-1) break;
            if(i+1<n && j+1<n && !ans[i+1][j+1])
                ans[i+1][j+1]=x,qi.push(i+1),qj.push(j+1);
            if(i+1<n && j-1>=0 && !ans[i+1][j-1])
                ans[i+1][j-1]=x,qi.push(i+1),qj.push(j-1);
            if(i-1>=0 && j+1<n && !ans[i-1][j+1])
                ans[i-1][j+1]=x,qi.push(i-1),qj.push(j+1);
            if(i-1>=0 && j-1>=0 && !ans[i-1][j-1])
                ans[i-1][j-1]=x,qi.push(i-1),qj.push(j-1);
            if(i+1<n && !ans[i+1][j])
                ans[i+1][j]=x,qi.push(i+1),qj.push(j);
            if(i-1>=0 && !ans[i-1][j])
                ans[i-1][j]=x,qi.push(i-1),qj.push(j);
            if(j+1<n && !ans[i][j+1])
                ans[i][j+1]=x,qi.push(i),qj.push(j+1);
            if(j-1>=0 && !ans[i][j-1])
                ans[i][j-1]=x,qi.push(i),qj.push(j-1);
        }
        if(ans[n-1][n-1]) return ans[n-1][n-1];
        return -1;
    }
};