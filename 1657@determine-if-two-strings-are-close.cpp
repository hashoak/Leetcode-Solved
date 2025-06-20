class Solution {
public:
    bool closeStrings(string w1, string w2) {
        if(w1.size()!=w2.size()) return 0;
        int f1[26]={0},f2[26]={0};
        for(char i:w1) f1[i-'a']++;
        for(char i:w2) f2[i-'a']++;
        for(int i=0;i<26;i++)
            if((!f1[i])^(!f2[i])) return 0;
        sort(f1,f1+26);
        sort(f2,f2+26);
        for(int i=0;i<26;i++)
            if(f1[i]!=f2[i]) return 0;
        return 1;
    }
};