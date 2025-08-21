class Solution {
public:
    bool check(vector<vector<char>> s,int p,int q)
    {
        char a=s[p][q];
        s[p][q]='.';
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

    bool isValidSudoku(vector<vector<char>>& board)
    {
        for(int i=0;i<9;i++)
        {
            for(int j=0;j<9;j++)
            {
                if(board[i][j]!='.' and !check(board,i,j)) return 0;
            }
        }
        return 1;
    }
};