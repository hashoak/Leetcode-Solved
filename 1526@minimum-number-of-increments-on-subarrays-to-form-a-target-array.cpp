class Solution {
public:
    int minNumberOperations(vector<int>& t) {
        int ans=t[0];
        for(int i=1;i<t.size();i++)
            if(t[i-1]<t[i]) ans+=t[i]-t[i-1];
        return ans;
    }
};