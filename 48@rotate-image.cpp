class Solution {
public:
    void rotate(vector<vector<int>>& m)
    {
        int t,n=m.size();
        for(int i=0;i<n/2;i++)
        {
            for(int j=i;j<n-i-1;j++)
            {
                t=m[i][j];
                m[i][j]=m[n-1-j][i];
                m[n-1-j][i]=m[n-1-i][n-1-j];
                m[n-1-i][n-1-j]=m[j][n-1-i];
                m[j][n-1-i]=t;
            }
        }
        return;
    }
};