class Solution {
public:
    int maxVowels(string s, int k) {
        int p=0;
        for(int i=0;i<k;i++)
            p+=(s[i]=='a' || s[i]=='e' || s[i]=='i' || s[i]=='o' || s[i]=='u');
        int ans=p;
        for(int i=k;i<s.size();i++) {
            p+=(s[i]=='a' || s[i]=='e' || s[i]=='i' || s[i]=='o' || s[i]=='u')
            -(s[i-k]=='a' || s[i-k]=='e' || s[i-k]=='i' || s[i-k]=='o' || s[i-k]=='u');
            ans=max(ans,p);
        }
        return ans;
    }
};