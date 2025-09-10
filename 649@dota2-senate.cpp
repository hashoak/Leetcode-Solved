class Solution {
public:
    string predictPartyVictory(string s) {
        queue<int> r,d;
        int n=s.size();
        for(int i=0;i<n;i++)
            s[i]=='R' ? r.push(i):d.push(i);
        while(!r.empty() && !d.empty()) {
            if(r.front()<d.front()) r.push(n);
            else d.push(n);
            n++,r.pop(),d.pop();
        }
        if(!r.empty()) return "Radiant";
        return "Dire";
    }
};