class Solution {
public:
    int nearestExit(vector<vector<char>>& m, vector<int>& e) {
        int r=m.size()-1,c=m[0].size()-1,ans=1;
        queue<pair<int,int>> q;
        q.push({e[0],e[1]});
        q.push({-1,-1});
        m[e[0]][e[1]]='+';
        while(q.front()!=q.back()) {
            if(q.front().first==-1) ans++,q.push({-1,-1}),q.pop();
            int x=q.front().first;
            int y=q.front().second;
            q.pop();
            if(y-1>=0 && m[x][y-1]=='.') {
                if(y-1==0 || !x || x==r) return ans;
                else m[x][y-1]='+',q.push({x,y-1});
            }
            if(y+1<m[0].size() && m[x][y+1]=='.') {
                if(y+1==c || !x || x==r) return ans;
                else m[x][y+1]='+',q.push({x,y+1});
            }
            if(x-1>=0 && m[x-1][y]=='.') {
                if(x-1==0 || !y || y==c) return ans;
                else m[x-1][y]='+',q.push({x-1,y});
            }
            if(x+1<m.size() && m[x+1][y]=='.') {
                if(x+1==r || !y || y==c) return ans;
                else m[x+1][y]='+',q.push({x+1,y});
            }
        }
        return -1;
    }
};