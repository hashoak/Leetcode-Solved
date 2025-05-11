class Solution {
public:
    int lengthOfLongestSubstring(string s)
    {
        int n=s.length(),l=0;
        string ss="";
        for(int i=0;i<n;i++)
        {
            int j=0;
            while(j<ss.length() and s[i]!=ss[j]) j++;
            if(j<ss.length()) ss.erase(0,j+1);
            ss+=s[i];
            l=max(l,int(ss.length()));
        }
        return l;
    }
};