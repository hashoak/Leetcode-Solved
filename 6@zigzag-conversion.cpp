class Solution {
public:
    string convert(string s, int nr)
    {
        if(nr==1) return s;
        int n=s.length();
        string ans(1,s[0]);
        int i,j;
        for(j=0;j<nr;j++)
        {
            i=j;
            while(i<n)
            {
                if(j>0 and j<nr-1) ans+=s[i];
                i+=((nr-1-j)*2);
                if(i>=n) break;
                ans+=s[i];
                i+=(j*2);
            }
        }
        return ans;
    }
};