class Solution {
public:
    vector<int> successfulPairs(vector<int>& s,vector<int>& p,long long sc) {
        vector<int> ans;
        sort(p.begin(),p.end());
        for(auto i:s)
            ans.push_back(p.size()-(lower_bound(p.begin(),p.end(),(sc+i-1)/i)-p.begin()));
        return ans;
    }
};