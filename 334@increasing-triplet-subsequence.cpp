class Solution {
public:
    bool increasingTriplet(vector<int>& nums) {
        ios::sync_with_stdio(false);
        int a=INT_MAX,b=INT_MAX;
        for(auto i:nums) {
            if(i<=a) a=i;
            else if(i<=b) b=i;
            else return 1;
        }
        return 0;
    }
};