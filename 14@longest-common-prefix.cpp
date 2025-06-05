class Solution {
public:
    string longestCommonPrefix(vector<string>& v)
    {
        int n=v.size(),i,x=1;
        if(n==1) return v[0];
        for(auto i:v) if(!i.length()) return "";
        for(i=0;x;i++)
            for(int j=1;x && j<n;j++)
                x=(v[j-1][i]==v[j][i] && v[j][i]!='\0');
        return v[0].substr(0,i-1);
    }
};