class Solution {
public:
    bool canPlaceFlowers(vector<int>& f, int n) {
        int l=f.size();
        for(int i=0;n && i<l;i++) {
            if(!f[i] && (!i || !f[i-1]) && (i==l-1 || !f[i+1]))
                n--,f[i]=1,i++;
        }
        return n==0;
    }
};