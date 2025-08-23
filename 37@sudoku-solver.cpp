class Solution {
public:
    vector<vector<char>> ans;
    bool check(vector<vector<char>>& s,int p,int q,char a)
    {
        int i,j,n=(p/3)*3,m=(q/3)*3;
        for(i=0;i<9;i++)
        {
            if(s[i][q]==a) return 0;
        }
        for(j=0;j<9;j++)
        {
            if(s[p][j]==a) return 0;
        }
        for(i=n;i<n+3;i++)
        {
            for(j=m;j<m+3;j++)
            {
                if(s[i][j]==a) return 0;
            }
        }
        return 1;
    }

    void solve(vector<vector<char>>& s,int p=0,int q=0)
    {
        if(p==9)
        {
            ans=s;
            return;
        }
        if(s[p][q]!='.')
        {
            if(q==8) solve(s,p+1,0);
            else solve(s,p,q+1);
            return;
        }
        for(int a=1;a<=9;a++)
        {
            if(check(s,p,q,'0'+a))
            {
                vector<vector<char>> t(s);
                t[p][q]='0'+a;
                if(q==8) solve(t,p+1,0);
                else solve(t,p,q+1);
            }
        }
        return;
    }

    void solveSudoku(vector<vector<char>>& s)
    {
        solve(s);
        s=ans;
        return;
    }
};