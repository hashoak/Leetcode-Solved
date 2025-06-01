class Solution {
public:
    vector<bool> kidsWithCandies(vector<int>& c, int e) {
        int m=0;
        for(auto i:c) m=max(m,i);
        vector<bool> ans;
        for(auto i:c) ans.push_back(i+e>=m);
        return ans;
    }
};