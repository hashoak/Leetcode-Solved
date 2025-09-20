class Solution {
public:
    vector<int> asteroidCollision(vector<int>& a) {
        vector<int> ans;
        for(int i=0;i<a.size();i++) {
            if(ans.empty() || a[i]>0 || ans.back()<0) ans.push_back(a[i]);
            else if(ans.back()<-a[i]) ans.pop_back(),i--;
            else if(ans.back()==-a[i]) ans.pop_back();
        }
        return ans;
    }
};