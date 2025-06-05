class Solution {
public:
    int longestSubarray(vector<int>& n) {
        int i=0,z=0,ans=0;
        for(int j=0;j<n.size();j++) {
            if(!n[j]) z++;
            if(z<=1) ans=max(ans,j-i);
            else {
                if(!n[i]) z--;
                i++;
            }
        }
        return ans;
    }
};