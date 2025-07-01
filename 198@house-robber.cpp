class Solution {
public:
    int simba(vector<int> &n,vector<int> &m,int h) {
        if(h>=n.size()) return 0;
        if(m[h]!=-1) return m[h];
        return m[h]=max(n[h]+simba(n,m,h+2),simba(n,m,h+1));
    }
    int rob(vector<int>& n) {
        vector<int> m(n.size(),-1);
        return simba(n,m,0);
    }
};