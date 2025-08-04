class Solution {
public:
    int minimizedStringLength(string s) {
        int n=s.length(),a[26]={0},ans=0;
        for(int i:s) a[i-'a']=1;
        for(int i:a) ans+=i;
        return ans;
    }
};