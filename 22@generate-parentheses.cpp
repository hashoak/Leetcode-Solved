class Solution {
    vector<string> ans;
public:
    void vadaPav(int n,int o=1,int c=0,string s="(")
    {
        if(o==n && c==n) { ans.push_back(s); return; }
        if(o<n) vadaPav(n,o+1,c,s+'(');
        if(c<o && c<n) vadaPav(n,o,c+1,s+')');
    }
    vector<string> generateParenthesis(int n) {
        vadaPav(n);
        return ans;
    }
};