class Solution {
public:
    bool safe(int n,int x,int y,vector<string> s)
    {
        for(int i=1;x-i>=0 && y-i>=0;i++)
        {
            if(s[x-i][y-i]=='Q') return 0;
        }
        for(int i=1;x-i>=0 && y+i<n;i++)
        {
            if(s[x-i][y+i]=='Q') return 0;
        }
        for(int i=1;x-i>=0;i++)
        {
            if(s[x-i][y]=='Q') return 0;
        }
        return 1;
    }

    bool nqueen(int n,int x,int y,vector<string>& s,vector<vector<string>>& ans)
    {
        if(x==n)
        {
            ans.push_back(s);
            return 1;
        }
        for(int i=y;i<n;i++)
        {
            s[x][i]='Q';
            if(safe(n,x,i,s)) nqueen(n,x+1,0,s,ans);
            s[x][i]='.';
        }
        return 0;
    }
    vector<vector<string>> solveNQueens(int n)
    {
        vector<vector<string>> ans;
        vector<string> s(n,string(n,'.'));
        nqueen(n,0,0,s,ans);
        return ans;
    }
};