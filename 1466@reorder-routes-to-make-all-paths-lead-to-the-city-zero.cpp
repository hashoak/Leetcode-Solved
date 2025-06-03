class Solution {
    void mersal(vector<vector<int>> &m,int p,int pr,int &ans) {
        for(auto i:m[p])
            if(abs(i)!=pr)
                ans+=(i>0),mersal(m,abs(i),p,ans);
    }
public:
    int minReorder(int n, vector<vector<int>>& c) {
        vector<vector<int>> m(n);
        for(auto &i:c)
            m[i[0]].push_back(i[1]),
            m[i[1]].push_back(-i[0]);
        int ans=0;
        mersal(m,0,-1,ans);
        return ans;
    }
};