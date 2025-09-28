class Solution {
public:
    int numPairsDivisibleBy60(vector<int>& time) {
        int m[60]={0};
        int ans=0;
        for(int t:time) {
            t%=60;
            ans+=m[(60-t)%60];
            m[t]++;
        }
        return ans;
    }
};