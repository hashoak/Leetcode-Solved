class Solution {
public:
    long long matrixSumQueries(int n, vector<vector<int>>& queries) {
        int q=queries.size(),r=0,c=0,row[n],col[n];
        long long sum=0;
        for(int i=0;i<n;i++) row[i]=col[i]=1;
        for(int i=q-1;i>=0;i--)
        {
            if(queries[i][0] && col[queries[i][1]])
            {
                sum+=queries[i][2]*(n-r);
                c++,col[queries[i][1]]=0;
            }
            else if(!queries[i][0] && row[queries[i][1]])
            {
                sum+=queries[i][2]*(n-c);
                r++,row[queries[i][1]]=0;
            }
        }
        return sum;
    }
};