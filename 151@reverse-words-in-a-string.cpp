class Solution {
public:
    string reverseWords(string s) {
        string ans="",w="";
        stringstream ss(s);
        while(ss>>w)
            ans=' '+w+ans;
        ans.erase(0,1);
        return ans;
    }
};