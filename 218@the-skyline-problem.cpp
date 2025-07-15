class Solution {
public:
    vector<vector<int>> getSkyline(vector<vector<int>>& b)
    {
        b.resize(distance(b.begin(),unique(b.begin(),b.end())));
        int n=b.size(),j,h1,f;
        vector<vector<int>> ans;
        for(int i=0;i<n;i++)
        {
            f=1;
            for(j=0;f && j<n && b[j][0]<=b[i][0];j++)
            {
                if(i!=j && b[i][2]<=b[j][2] && b[i][0]<=b[j][1]) f=0;
            }
            if(f) ans.push_back({b[i][0],b[i][2]});
            h1=0,f=1;
            for(j=0;f && j<n && b[i][1]>=b[j][0];j++)
            {
                if(i!=j && b[i][2]<=b[j][2] && b[i][1]<=b[j][1] && b[i][1]>=b[j][0])
                    f=0;
                else if(b[i][2]>b[j][2] && b[i][1]<b[j][1] && h1<b[j][2])
                    h1=b[j][2];
            }
            if(f) ans.push_back({b[i][1],h1});
        }
        sort(ans.begin(),ans.end());
        return ans;
    }
};