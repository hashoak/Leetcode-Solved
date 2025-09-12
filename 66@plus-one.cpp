class Solution {
public:
    vector<int> plusOne(vector<int>& d) {
        int c=1;
        for(int i=d.size()-1;i>=0 && c;i--) d[i]+=c,c=d[i]/10,d[i]%=10;
        if(c) d.insert(d.begin(),c);
        return d;
    }
};