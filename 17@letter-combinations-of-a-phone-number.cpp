class Solution {
    string m[8]={"abc","def","ghi","jkl","mno","pqrs","tuv","wxyz"};
    vector<string> ans;
public:
    void eeRaathale(string d,string a)
    {
        if(d.empty()) return ans.push_back(a);
        int x=d[0]-'2',n=m[x].length();
        for(int i=0;i<n;i++) eeRaathale(d.substr(1),a+m[x][i]);
    }

    vector<string> letterCombinations(string d) {
        if(!d.empty()) eeRaathale(d,"");
        return ans;
    }
};