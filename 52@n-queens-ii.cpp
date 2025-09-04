class Solution {
public:
    bool check(int** a,int n,int x,int y)
    {
        for(int i=0;i<n;i++)
        {
            if(i!=y && a[x][i]) return 0;
            if(i!=x && a[i][y]) return 0;
        }
        for(int i=1;i<n;i++)
        {
            if(x-i>=0 && y-i>=0 && a[x-i][y-i]) return 0;
            if(x-i>=0 && y+i<n && a[x-i][y+i]) return 0;
            if(x+i<n && y-i>=0 && a[x+i][y-i]) return 0;
            if(x+i<n && y+i<n && a[x+i][y+i]) return 0;
        }
        return 1;
    }
    int l;
    bool nQueen(int** a,int n,int x=0)
    {
        if(x==n) 
        {
            l++;
            return 0;
        }
        for(int i=0;i<n;i++)
        {
            a[x][i]=1;
            if(check(a,n,x,i) && nQueen(a,n,x+1)) return 1;
            a[x][i]=0;
        }
        return 0;
    }

    int totalNQueens(int n) {
        int** a=new int*[n];
        for(int i=0;i<n;i++)
        {
            a[i]=new int[n];
            for(int j=0;j<n;j++) a[i][j]=0;
        }
        l=0;
        nQueen(a,n,l);
        return l;
    }
};