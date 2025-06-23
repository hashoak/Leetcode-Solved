class Solution {
public:
    string mergeAlternately(string w1, string w2) {
        int i=0,j=0;
        int n=w1.size(),m=w2.size();
        string ans="";
        while(i<n and j<m)
            ans+=w1[i++],ans+=w2[j++];
        while(i<n)
            ans+=w1[i++];
        while(j<m)
            ans+=w2[j++];
        return ans;
    }
};