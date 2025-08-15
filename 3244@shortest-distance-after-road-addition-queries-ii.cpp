class Solution {
public:
    vector<int> shortestDistanceAfterQueries(int n, vector<vector<int>>& q) {
        set<int> s;
        vector<int> ans;
        for(int i=1;i<n;i++) s.insert(i);
        for(auto i:q) {
            s.erase(s.upper_bound(i[0]),s.lower_bound(i[1]));
            ans.push_back(s.size());
        }
        return ans;
    }
};