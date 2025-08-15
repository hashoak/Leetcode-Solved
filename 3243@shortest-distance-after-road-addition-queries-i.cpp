class Solution {
public:
    vector<int> shortestDistanceAfterQueries(int n, vector<vector<int>>& q) {
        vector<vector<int>> a;
        vector<int> ans;
        for(int i=0;i<n;i++) a.push_back({n-1-i,i+1});
        for(auto i:q) {
            a[i[0]].push_back(i[1]);
            for(int j=i[0];j>=0;j--) {
                for(int k=1;k<a[j].size();k++) {
                    a[j][0]=min(a[j][0],a[a[j][k]][0]+1);
                }
            }
            ans.push_back(a[0][0]);
        }
        return ans;
    }
};