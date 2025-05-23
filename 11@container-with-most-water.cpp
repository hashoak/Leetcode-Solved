class Solution {
public:
    int maxArea(vector<int>& h) {
        int ans=0;
        for(int i=0,j=h.size()-1;i<j;) {
            ans=max(ans,min(h[i],h[j])*(j-i));
            h[i]<h[j] ? i++ : j--;
        }
        return ans;
    }
};